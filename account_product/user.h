#ifndef USER_H
#define USER_H

#include <QObject>
#include "iremove.h"
#include "idelete.h"
#include "iadd.h"
#include "iread.h"
#include "database.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlRecord>
#include <QSqlRelationalTableModel>


class User : IAdd, IDelete, IRemove, IRead

{

public:
    User(QString, QString, int);
    User();
    void set_name(QString);
    void set_password(QString);
    void set_role(int);
//    QString get_name();
//    QString get_password();
//    int get_role();
    bool isUserRegistered(User&, QString, QString);
    void add_to_db() const override;
    QSqlTableModel* read_from_db() const override;
    void delete_from_db() const override;
    void remove_from_users() const override;
    User& operator =(const User& user);
private:
    Database db;

    QString name;
    QString password;
    int role;



};

#endif // USER_H
