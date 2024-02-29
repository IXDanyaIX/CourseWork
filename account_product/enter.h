#ifndef ENTER_H
#define ENTER_H

#include <QDialog>
#include "user.h"
#include <QMessageBox>

namespace Ui {
class Enter;
}

class Enter : public QDialog
{
    Q_OBJECT

public:
    explicit Enter(User &user, QWidget *parent = nullptr);
    ~Enter();

private slots:


    void on_pushButton_clicked();

private:
    Ui::Enter *ui;
    //Database db;
    User* user;

signals:
    void loginSuccess(const User& user);
};

#endif // ENTER_H
