#include "orders.h"

Orders::Orders()
{

}

Orders::Orders(QDate date, int status): date_order(date), status(status){

}

void Orders::add_to_db() const{

}

void Orders::delete_from_db() const{

}

QSqlTableModel* Orders::read_from_db() const{
    QSqlRelationalTableModel* model = new QSqlRelationalTableModel;
    model->setTable("orders");
    model->setRelation(2, QSqlRelation("status_order", "id", "name"));
    model->select();
    model->setEditStrategy(QSqlTableModel::OnRowChange);


    model->setHeaderData(0, Qt::Horizontal, "Номер заказа");
    model->setHeaderData(1, Qt::Horizontal, "Дата заказа");
    model->setHeaderData(2, Qt::Horizontal, "Статус заказа");


    return model;
}

QSqlTableModel* Orders::get_goods_from_order(int index){
    QSqlRelationalTableModel* model = new QSqlRelationalTableModel;
    model->setTable("orders_goods");
    model->setFilter("id_orders = " + QString::number(index));
    model->setRelation(0, QSqlRelation("goods", "id", "name"));
    model->select();
    model->removeColumn(1);

    model->setHeaderData(0, Qt::Horizontal, "Название товара");
    model->setHeaderData(1, Qt::Horizontal, "Количество");
    return model;
}

