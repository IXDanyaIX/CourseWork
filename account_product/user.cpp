#include "user.h"

User::User(QString name, QString password, int role): name(name), password(password), role(role)
{

}

User& User::operator =(const User& user){
    name = user.name;
    password = user.password;
    role = user.role;
    return *this;
}

User::User(){

}

//QString User::get_name(){
//    return name;
//}

//QString User::get_password(){
//    return password;
//}

//int User::get_role(){
//    return role;
//}
void User::set_name(QString name){
    this->name = name;
}

void User::set_password(QString password){
    this->password = password;
}

void User::set_role(int role){
    this->role = role;
}


void User::add_to_db() const {

}
QSqlTableModel* User::read_from_db() const {


    QSqlRelationalTableModel* model = new QSqlRelationalTableModel;
    model->setTable("users");
    model->setRelation(3, QSqlRelation("role", "id", "name"));
    model->select();
    model->setEditStrategy(QSqlTableModel::OnRowChange);


    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Логин");
    model->setHeaderData(2, Qt::Horizontal, "Пароль");
    model->setHeaderData(3, Qt::Horizontal, "Роль");

    return model;
}
void User::delete_from_db() const {

}
void User::remove_from_users() const {

}

bool User::isUserRegistered(User& user, QString name, QString password){
    db.openConnection();

    bool loginSuccessful = false;

    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE name  = :username AND password = :password");

    query.bindValue(":username", name);
    query.bindValue(":password", password);








    if (query.exec() && query.next()) {
        // Если есть совпадение логина и пароля
        loginSuccessful = true;

        QSqlRecord rec = query.record();
        user.name = name;
        user.password = password;
        user.role = query.value(rec.indexOf("role")).toInt();
    }

    db.closeConnection();

    return loginSuccessful;
}
