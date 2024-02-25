#ifndef STATUS_GOOD_H
#define STATUS_GOOD_H
#include "iadd.h"
#include "idelete.h"
#include "iread.h"

class Status_good: IAdd, IDelete, IRead
{
public:
    Status_good();
    Status_good(QString);

    void add_to_db() const override;
    void delete_from_db() const override;
    QSqlTableModel* read_from_db() const override;

private:
    QString name;

};

#endif // STATUS_GOOD_H
