#ifndef GOODS_H
#define GOODS_H
#include "iadd.h"
#include "idelete.h"
#include "iread.h"

#include <QSqlRelationalTableModel>

class Goods: IAdd, IDelete, IRead
{
public:
    Goods();
    Goods(QString, int, int, int, int, QString, QString);
    void add_to_db() const override;
    void delete_from_db() const override;
    QSqlTableModel* read_from_db() const override;

private:

    QString name; //
    int id_contractors; //
    int id_units; //
    int id_category; //
    int id_status;
    int shelf_life; //
    QString storage_location; //
    QString description; //
};

#endif // GOODS_H
