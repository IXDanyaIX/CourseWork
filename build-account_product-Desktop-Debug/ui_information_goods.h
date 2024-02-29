/********************************************************************************
** Form generated from reading UI file 'information_goods.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_GOODS_H
#define UI_INFORMATION_GOODS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_information_goods
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_2;
    QLineEdit *name_goods;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *id_goods;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *units;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *contractors;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *category;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpinBox *life;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *location;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QSpinBox *quntity;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QTextEdit *description;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *information_goods)
    {
        if (information_goods->objectName().isEmpty())
            information_goods->setObjectName(QString::fromUtf8("information_goods"));
        information_goods->resize(848, 560);
        QFont font;
        font.setPointSize(14);
        information_goods->setFont(font);
        verticalLayout_2 = new QVBoxLayout(information_goods);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_2 = new QLabel(information_goods);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(18);
        label_2->setFont(font1);

        horizontalLayout_10->addWidget(label_2);

        name_goods = new QLineEdit(information_goods);
        name_goods->setObjectName(QString::fromUtf8("name_goods"));
        name_goods->setFont(font1);

        horizontalLayout_10->addWidget(name_goods);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(information_goods);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(142, 0));
        label->setMaximumSize(QSize(140, 16777215));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        id_goods = new QSpinBox(information_goods);
        id_goods->setObjectName(QString::fromUtf8("id_goods"));
        id_goods->setMinimumSize(QSize(94, 0));
        id_goods->setFont(font);

        horizontalLayout->addWidget(id_goods);


        horizontalLayout_9->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(information_goods);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(39, 0));
        label_4->setMaximumSize(QSize(37, 16777215));

        horizontalLayout_3->addWidget(label_4);

        units = new QComboBox(information_goods);
        units->setObjectName(QString::fromUtf8("units"));
        units->setMinimumSize(QSize(136, 0));

        horizontalLayout_3->addWidget(units);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout_9->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(information_goods);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_2->addWidget(label_3);

        contractors = new QComboBox(information_goods);
        contractors->setObjectName(QString::fromUtf8("contractors"));

        horizontalLayout_2->addWidget(contractors);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(information_goods);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_4->addWidget(label_5);

        category = new QComboBox(information_goods);
        category->setObjectName(QString::fromUtf8("category"));
        category->setMinimumSize(QSize(200, 0));

        horizontalLayout_4->addWidget(category);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(information_goods);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_5->addWidget(label_6);

        life = new QSpinBox(information_goods);
        life->setObjectName(QString::fromUtf8("life"));
        life->setMinimumSize(QSize(83, 0));

        horizontalLayout_5->addWidget(life);

        label_11 = new QLabel(information_goods);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(40, 0));

        horizontalLayout_5->addWidget(label_11);


        horizontalLayout_11->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(information_goods);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        location = new QLineEdit(information_goods);
        location->setObjectName(QString::fromUtf8("location"));

        horizontalLayout_7->addWidget(location);


        horizontalLayout_11->addLayout(horizontalLayout_7);


        horizontalLayout_13->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_10 = new QLabel(information_goods);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_12->addWidget(label_10);

        quntity = new QSpinBox(information_goods);
        quntity->setObjectName(QString::fromUtf8("quntity"));
        quntity->setMinimumSize(QSize(91, 0));

        horizontalLayout_12->addWidget(quntity);


        horizontalLayout_13->addLayout(horizontalLayout_12);


        verticalLayout_2->addLayout(horizontalLayout_13);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_9 = new QLabel(information_goods);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_9->setFont(font2);

        verticalLayout->addWidget(label_9);

        description = new QTextEdit(information_goods);
        description->setObjectName(QString::fromUtf8("description"));

        verticalLayout->addWidget(description);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        pushButton = new QPushButton(information_goods);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_8->addWidget(pushButton);

        pushButton_2 = new QPushButton(information_goods);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_8->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_8);


        retranslateUi(information_goods);

        QMetaObject::connectSlotsByName(information_goods);
    } // setupUi

    void retranslateUi(QDialog *information_goods)
    {
        information_goods->setWindowTitle(QCoreApplication::translate("information_goods", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("information_goods", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \321\202\320\276\320\262\320\260\321\200\320\265:", nullptr));
        label->setText(QCoreApplication::translate("information_goods", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273:", nullptr));
        label_4->setText(QCoreApplication::translate("information_goods", "\320\225\320\230:", nullptr));
        label_3->setText(QCoreApplication::translate("information_goods", "\320\232\320\276\320\275\321\202\321\200\320\260\320\263\320\265\320\275\321\202:", nullptr));
        label_5->setText(QCoreApplication::translate("information_goods", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217:", nullptr));
        label_6->setText(QCoreApplication::translate("information_goods", "\320\241\321\200\320\276\320\272 \321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217:", nullptr));
        label_11->setText(QCoreApplication::translate("information_goods", "\321\201\321\203\321\202.", nullptr));
        label_8->setText(QCoreApplication::translate("information_goods", "\320\234\320\265\321\201\321\202\320\276 \321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217:", nullptr));
        label_10->setText(QCoreApplication::translate("information_goods", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\260 \321\201\320\272\320\273\320\260\320\264\320\265:", nullptr));
        label_9->setText(QCoreApplication::translate("information_goods", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        pushButton->setText(QCoreApplication::translate("information_goods", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("information_goods", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class information_goods: public Ui_information_goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_GOODS_H
