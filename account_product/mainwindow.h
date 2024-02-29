#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "enter.h"
#include <QHBoxLayout>
#include "contractors.h"
#include "units_of_measurement.h"
#include "category.h"
#include "status_good.h"
#include "status_order.h"
#include "rigts.h"
#include "role.h"
#include "shipment.h"
#include "orders.h"
#include "goods.h"
#include <QPushButton>
#include "information_goods.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
     void addNewTab();
    //void on_pushButton_clicked();

    void on_enter_button_clicked();

    void on_category_triggered();

    void on_contractors_triggered();

    void on_Users_triggered();

    void on_units_of_measurement_triggered();

    void on_goods_triggered();

    void on_status_goods_triggered();

    void on_status_order_triggered();

    void on_Rights_triggered();

    void on_Role_triggered();

    void on_shipment_triggered();

    void on_orders_triggered();

    void onOrderClicked(const QModelIndex &index);

    void onGoodsClicked(const QModelIndex &index);



    void on_tabWidget_tabCloseRequested(int index);



    void on_tabWidget_tabBarDoubleClicked(int index);

    void on_tabWidget_currentChanged(int index);

    void on_action_triggered();

    void onClicked(const QModelIndex&);

    void on_action_2_triggered();

private:

    information_goods* inf_goods_form;
    QWidget * new_tab();
    void check_role();
    Ui::MainWindow *ui;
    Enter* enter;
    User user;
    QTableView *table_data;
    QPushButton *addTabButton;
    QAbstractItemModel * absmodel;
    QSqlTableModel *model;
    QTableView* create_table();
    int currentRow;

public slots:
    void get_users_from_enter(const User& user);
};
#endif // MAINWINDOW_H
