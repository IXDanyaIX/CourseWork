#include "status_order.h"

Status_order::Status_order()
{

}

Status_order::Status_order(QString name): name(name){}

void Status_order::add_to_db() const{

}

void Status_order::delete_from_db() const{

}

QSqlTableModel* Status_order::read_from_db() const{
    QSqlTableModel* model = new QSqlTableModel;
    model->setTable("status_order");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnRowChange);


    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Название");


    return model;
}
