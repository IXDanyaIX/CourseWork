/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *contractors;
    QAction *units_of_measurement;
    QAction *category;
    QAction *status_goods;
    QAction *goods;
    QAction *status_order;
    QAction *orders;
    QAction *shipment;
    QAction *Users;
    QAction *Role;
    QAction *Rights;
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *enter_button;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1052, 600);
        contractors = new QAction(MainWindow);
        contractors->setObjectName(QString::fromUtf8("contractors"));
        QFont font;
        font.setPointSize(15);
        contractors->setFont(font);
        units_of_measurement = new QAction(MainWindow);
        units_of_measurement->setObjectName(QString::fromUtf8("units_of_measurement"));
        units_of_measurement->setFont(font);
        category = new QAction(MainWindow);
        category->setObjectName(QString::fromUtf8("category"));
        category->setFont(font);
        status_goods = new QAction(MainWindow);
        status_goods->setObjectName(QString::fromUtf8("status_goods"));
        status_goods->setFont(font);
        goods = new QAction(MainWindow);
        goods->setObjectName(QString::fromUtf8("goods"));
        goods->setFont(font);
        status_order = new QAction(MainWindow);
        status_order->setObjectName(QString::fromUtf8("status_order"));
        status_order->setFont(font);
        orders = new QAction(MainWindow);
        orders->setObjectName(QString::fromUtf8("orders"));
        orders->setFont(font);
        shipment = new QAction(MainWindow);
        shipment->setObjectName(QString::fromUtf8("shipment"));
        shipment->setFont(font);
        Users = new QAction(MainWindow);
        Users->setObjectName(QString::fromUtf8("Users"));
        Users->setFont(font);
        Role = new QAction(MainWindow);
        Role->setObjectName(QString::fromUtf8("Role"));
        Role->setFont(font);
        Rights = new QAction(MainWindow);
        Rights->setObjectName(QString::fromUtf8("Rights"));
        Rights->setFont(font);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/image/free-icon-add-button-5974633.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/image/free-icon-delete-5610967.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        enter_button = new QPushButton(centralwidget);
        enter_button->setObjectName(QString::fromUtf8("enter_button"));

        verticalLayout->addWidget(enter_button);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setAcceptDrops(false);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1052, 28));
        menubar->setFont(font);
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar_2);
        MainWindow->insertToolBarBreak(toolBar_2);

        menubar->addAction(menu->menuAction());
        toolBar->addAction(contractors);
        toolBar->addAction(units_of_measurement);
        toolBar->addAction(category);
        toolBar->addAction(status_goods);
        toolBar->addAction(status_order);
        toolBar->addAction(orders);
        toolBar->addAction(shipment);
        toolBar->addAction(Users);
        toolBar->addAction(Role);
        toolBar->addAction(Rights);
        toolBar->addAction(goods);
        toolBar_2->addAction(action);
        toolBar_2->addAction(action_2);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "StockTrack", nullptr));
        contractors->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\321\200\320\260\320\263\320\265\320\275\321\202", nullptr));
        units_of_measurement->setText(QCoreApplication::translate("MainWindow", "\320\225\320\264\320\270\320\275\320\270\321\206\321\213 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217", nullptr));
        category->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        status_goods->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        goods->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\262\320\260\321\200\321\213", nullptr));
        status_order->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        orders->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\320\260\320\267\321\213", nullptr));
        shipment->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\320\260\320\262\320\272\320\270", nullptr));
        Users->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        Role->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\273\320\270", nullptr));
        Rights->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        enter_button->setText(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\320\260\320\264\320\272\320\260 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\320\260\320\264\320\272\320\260 2", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
