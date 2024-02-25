#ifndef ROLE_H
#define ROLE_H
#include "iadd.h"
#include "idelete.h"
#include "iread.h"
#include "QSqlRelationalTableModel"

class Role: IAdd, IDelete, IRead
{
public:
    Role();
    Role(QString, int);

    void add_to_db() const override;
    void delete_from_db() const override;
    QSqlTableModel* read_from_db() const override;

private:
    QString name;
    int rights;
};

#endif // ROLE_H
