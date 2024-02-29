#include "information_goods.h"
#include "ui_information_goods.h"
#include <QSqlRelationalDelegate>
#include <qdebug.h>
information_goods::information_goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::information_goods)
{
    ui->setupUi(this);
    mapper = new QDataWidgetMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
    ui->units->setSizeAdjustPolicy(QComboBox::AdjustToContents);


}

information_goods::~information_goods()
{
    delete ui;
}

void information_goods::setModel(QAbstractItemModel* model){


    QSqlRelationalTableModel *relationalModel = static_cast<QSqlRelationalTableModel*>(model);
    //relationalModel->setRelation(1, QSqlRelation("contractors", "id", "name"));
    //relationalModel->setRelation(3, QSqlRelation("category", "id", "name"));

    //relationalModel->select();

    mapper->setModel(relationalModel);
    mapper->setItemDelegate(new QSqlRelationalDelegate(this));





//    mapper->addMapping(ui->category, 3);
//    ui->category->setModel(relationalModel->relationModel(3));
//    ui->category->setModelColumn(3);




//    mapper->addMapping(ui->contractors, 1); // Маппинг для QComboBox, где columnIndex - индекс столбца с внешним ключом

//    // Настройка QComboBox для выбора значений внешнего ключа
//    ui->contractors->setModel(relationalModel->relationModel(1)); // Установка модели, связанной с внешним ключом
//    ui->contractors->setModelColumn(1); // Предполагая, что display_column_name находится во втором столбце






    mapper->addMapping(ui->contractors, 1); // Маппинг для первого QComboBox
    mapper->addMapping(ui->category, 3); // Маппинг для второго QComboBox
    mapper->addMapping(ui->units, 2);

    // Настройка QComboBox для выбора значений внешнего ключа
    ui->contractors->setModel(relationalModel->relationModel(1)); // Установка модели для первого QComboBox
    ui->contractors->setModelColumn(1); // Предполагая, что display_column_name_1 находится во втором столбце
    ui->units->setModel(relationalModel->relationModel(2));
    ui->units->setModelColumn(1);


    ui->category->setModel(relationalModel->relationModel(3)); // Установка модели для второго QComboBox
    ui->category->setModelColumn(1); // Предполагая, что display_column_name_2 находится во втором столбце




       /////////////////////////
    mapper->addMapping(ui->name_goods, 5);
    mapper->addMapping(ui->id_goods, 0);
    mapper->addMapping(ui->units, 2);
    //mapper->addMapping(ui->contractors, 1);
    //mapper->addMapping(ui->category, 3);
    mapper->addMapping(ui->life, 6);
    mapper->addMapping(ui->location, 7);
    mapper->addMapping(ui->description, 8);


////////////////////////



}

void information_goods::on_pushButton_clicked()
{
    mapper->submit();
}


void information_goods::on_pushButton_2_clicked()
{
    close();
}

