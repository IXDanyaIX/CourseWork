#include "role.h"

Role::Role()
{

}

Role::Role(QString name, int rights): name(name), rights(rights){

}

void Role::add_to_db() const{

}

void Role::delete_from_db() const{

}

QSqlTableModel* Role::read_from_db() const{
    QSqlRelationalTableModel* model = new QSqlRelationalTableModel;
    model->setTable("role");
    model->setRelation(2, QSqlRelation("rights", "id", "name"));
    model->select();
    model->setEditStrategy(QSqlTableModel::OnRowChange);


    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Название");
    model->setHeaderData(2, Qt::Horizontal, "Права");


    return model;
}
