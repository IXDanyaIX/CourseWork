#ifndef INFORMATION_GOODS_H
#define INFORMATION_GOODS_H

#include <QDialog>
#include <QDataWidgetMapper>
#include <QSqlRelationalTableModel>
namespace Ui {
class information_goods;
}

class information_goods : public QDialog
{
    Q_OBJECT

public:
    explicit information_goods(QWidget *parent = nullptr);
    ~information_goods();
    void setModel(QAbstractItemModel*);
    QDataWidgetMapper* mapper;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::information_goods *ui;

};

#endif // INFORMATION_GOODS_H
