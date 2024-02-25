#ifndef STATUS_ORDER_H
#define STATUS_ORDER_H
#include "iadd.h"
#include "idelete.h"
#include "iread.h"

class Status_order: IAdd, IDelete, IRead
{
public:
    Status_order();
    Status_order(QString);

    void add_to_db() const override;
    void delete_from_db() const override;
    QSqlTableModel* read_from_db() const override;

private:
    QString name;
};

#endif // STATUS_ORDER_H
