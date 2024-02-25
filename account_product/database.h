#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <QDebug>

class Database : public QObject
{
    Q_OBJECT
public:
    explicit Database(QObject* parent = nullptr);
    ~Database();

    void openConnection();
    void closeConnection();

private:
    QSqlDatabase m_database;
};

#endif // DATABASE_H
