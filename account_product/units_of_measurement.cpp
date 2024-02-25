#include "units_of_measurement.h"

Units_of_measurement::Units_of_measurement()
{

}

Units_of_measurement::Units_of_measurement(QString name, char* des): name(name){
    strncpy(designation, des, 4); // Копируем только первые 5 символов
    designation[4] = '\0';
}

void Units_of_measurement::add_to_db() const{

}

void Units_of_measurement::delete_from_db() const{

}

QSqlTableModel* Units_of_measurement::read_from_db() const {
    QSqlTableModel* model = new QSqlTableModel;
    model->setTable("units_of_measurement");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnRowChange);

    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Наименование");
    model->setHeaderData(2, Qt::Horizontal, "Обозначение");


    return model;
}





