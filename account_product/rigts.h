#ifndef RIGTS_H
#define RIGTS_H
#include "iadd.h"
#include "idelete.h"
#include "iread.h"


class Rights: IAdd, IDelete, IRead
{
public:
    Rights();
    Rights(QString);
    void add_to_db() const override;
    void delete_from_db() const override;
    QSqlTableModel* read_from_db() const override;

private:
    QString name;
};

#endif // RIGTS_H
