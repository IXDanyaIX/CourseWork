#ifndef CATEGORY_H
#define CATEGORY_H

#include "iadd.h"
#include "idelete.h"
#include "iread.h"

class Category : IAdd, IDelete, IRead
{
public:
    Category();
    Category(QString);

    void add_to_db() const override;
    void delete_from_db() const override;
    QSqlTableModel* read_from_db() const override;

private:
    QString name;

};

#endif // CATEGORY_H
