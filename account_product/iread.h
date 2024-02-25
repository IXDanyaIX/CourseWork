#ifndef IREAD_H
#define IREAD_H
#include <QObject>
#include <QSqlTableModel>

class IRead: public QObject
{
    Q_OBJECT
public:
    virtual QSqlTableModel* read_from_db() const =0;
};

#endif // IREAD_H
