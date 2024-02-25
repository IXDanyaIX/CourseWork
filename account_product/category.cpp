#include "category.h"

Category::Category()
{

}

Category::Category(QString name): name(name){

}

void Category::add_to_db() const{

}

void Category::delete_from_db() const{

}

QSqlTableModel* Category::read_from_db() const{
    QSqlTableModel* model = new QSqlTableModel;
    model->setTable("category");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnRowChange);


    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Название");


    return model;
}
