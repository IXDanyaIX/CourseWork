#include "status_good.h"

Status_good::Status_good()
{

}

Status_good::Status_good(QString name): name(name){

}

void Status_good::add_to_db() const{

}

void Status_good::delete_from_db() const{

}

QSqlTableModel* Status_good::read_from_db() const{
    QSqlTableModel* model = new QSqlTableModel;
    model->setTable("status_goods");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnRowChange);


    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Название");


    return model;
}
