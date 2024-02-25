#include "contractors.h"

Contractors::Contractors()
{

}

void Contractors::add_to_db() const {

}

QSqlTableModel* Contractors::read_from_db() const{

    QSqlTableModel* model = new QSqlTableModel;
    model->setTable("contractors");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnRowChange);


    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Название");
    model->setHeaderData(2, Qt::Horizontal, "Телефон");
    model->setHeaderData(3, Qt::Horizontal, "Адресс");

    return model;
}

void Contractors::delete_from_db() const{

}

