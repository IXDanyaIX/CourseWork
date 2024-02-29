#include "enter.h"
#include "ui_enter.h"

Enter::Enter(User &user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Enter), user(&user)
{
    ui->setupUi(this);
}

Enter::~Enter()
{
    delete ui;
}




void Enter::on_pushButton_clicked()
{
   // User user;

    QString login = ui->login->text();
    QString pass = ui->password->text();





    if (user->isUserRegistered(*user, login, pass)) {
        qDebug() << "Успех";
        QMessageBox::information(this, "Авторизация", "Добро пожаловать!");
        this->close();
        emit loginSuccess(*user);
    } else {
        qDebug() << "не Успех";
        QMessageBox::warning(this, "Авторизация", "Неправильный логин или пароль! Пожалуйста, попробуйте снова.");

    }
}

