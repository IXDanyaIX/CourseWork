#ifndef CONTRACTORS_H
#define CONTRACTORS_H

#include <iadd.h>
#include <idelete.h>
#include <iread.h>
//#include <iremove.h>
#include <QTableView>
#include <QSqlTableModel>

class Contractors : IAdd, IRead, IDelete
{

public:
    Contractors();
    Contractors(QString name, QString telephone, QString adress);

    void add_to_db() const override;
    QSqlTableModel* read_from_db() const override;
    void delete_from_db() const override;



private:
    QString name;
    QString telephone;
    QString adress;

};

#endif // CONTRACTORS_H
