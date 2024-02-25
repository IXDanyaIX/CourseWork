#ifndef ORDERS_H
#define ORDERS_H
#include "iadd.h"
#include "idelete.h"
#include "iread.h"
#include "QDate"
#include "QSqlRelationalTableModel"

class Orders: IAdd, IDelete, IRead
{
public:
    Orders();
    Orders(QDate, int);

    void add_to_db() const override;
    void delete_from_db() const override;
    QSqlTableModel* read_from_db() const override;
    QSqlTableModel* get_goods_from_order(int);

private:
    QDate date_order;
    int status;
};

#endif // ORDERS_H
