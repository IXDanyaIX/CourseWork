#include "rigts.h"

Rights::Rights()
{

}

Rights::Rights(QString name): name(name){

}

void Rights::add_to_db() const{

}

void Rights::delete_from_db() const{

}

QSqlTableModel* Rights::read_from_db() const{
    QSqlTableModel* model = new QSqlTableModel;
    model->setTable("rights");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnRowChange);


    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Название");


    return model;
}
