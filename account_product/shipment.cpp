#include "shipment.h"

Shipment::Shipment()
{

}


Shipment::Shipment(int order, QDate date): order(order), date(date){

}

void Shipment::add_to_db() const{

}

void Shipment::delete_from_db() const{

}

QSqlTableModel* Shipment::read_from_db() const{
    QSqlRelationalTableModel* model = new QSqlRelationalTableModel;
    model->setTable("shipment");
    model->setRelation(0, QSqlRelation("orders", "id", "id"));
    model->select();
    model->setEditStrategy(QSqlTableModel::OnRowChange);


    model->setHeaderData(0, Qt::Horizontal, "ID заказа");
    model->setHeaderData(1, Qt::Horizontal, "Дата поставки");


    return model;
}
