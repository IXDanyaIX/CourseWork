#ifndef SHIPMENT_H
#define SHIPMENT_H
#include "iadd.h"
#include "idelete.h"
#include "iread.h"
#include "QSqlRelationalTableModel"
#include "QDate"

class Shipment: IAdd, IDelete, IRead
{
public:
    Shipment();
    Shipment(int, QDate);

    void add_to_db() const override;
    void delete_from_db() const override;
    QSqlTableModel* read_from_db() const override;

private:
    QDate date;
    int order;

};

#endif // SHIPMENT_H
