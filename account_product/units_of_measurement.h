#ifndef UNITS_OF_MEASUREMENT_H
#define UNITS_OF_MEASUREMENT_H

#include "iadd.h"
#include "idelete.h"
#include "iread.h"
#include "QComboBox"

class Units_of_measurement : IAdd, IDelete, IRead
{
public:
    Units_of_measurement();

    Units_of_measurement(QString, char*);

    void add_to_db() const override;
    void delete_from_db() const override;
    QSqlTableModel* read_from_db() const override;


private:
    QString name;
    char designation[5];
};

#endif // UNITS_OF_MEASUREMENT_H
