#include "goods.h"

Goods::Goods()
{

}
Goods::Goods(QString name, int id_category, int id_contractors, int shelf_life, int id_units, QString storage_location, QString description): name(name), id_category(id_category), id_contractors(id_contractors), shelf_life(shelf_life), id_units(id_units), storage_location(storage_location), description(description){}


void Goods::add_to_db() const{

}

void Goods::delete_from_db() const{

}

QSqlTableModel* Goods::read_from_db() const{
    QSqlRelationalTableModel* model = new QSqlRelationalTableModel;
    model->setTable("goods");


    model->setRelation(1, QSqlRelation("contractors", "id", "name"));
    model->setRelation(2, QSqlRelation("units_of_measurement", "id", "designation"));
    model->setRelation(3, QSqlRelation("category", "id", "name"));
    model->setRelation(4, QSqlRelation("status_goods", "id", "name"));
    model->select();




    return model;
}

QSqlTableModel* Goods::get_goods(int index){
    QSqlRelationalTableModel* model = new QSqlRelationalTableModel;
    model->setTable("goods");
    model->setFilter("id = " + QString::number(index));
    model->setRelation(0, QSqlRelation("goods", "id", "name"));
    model->select();
    model->removeColumn(1);

    model->setHeaderData(0, Qt::Horizontal, "Название товара");
    model->setHeaderData(1, Qt::Horizontal, "Количество");
    return model;
}
