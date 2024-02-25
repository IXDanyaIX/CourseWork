#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStyledItemDelegate>
#include <QInputDialog>
#include <QTimer>
#include <QTreeView>
#include <QHeaderView>

class OrderDelegate : public QStyledItemDelegate {
public:
    OrderDelegate(QObject *parent = nullptr) : QStyledItemDelegate(parent) {}

    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override {
        if (index.column() == 0) { // Проверяем, что это столбец с номером заказа
            QStyleOptionViewItem opt = option;
            initStyleOption(&opt, index);

            // Рисуем текст синим и подчеркнутым
            opt.font.setUnderline(is_set_under_line);
            opt.palette.setColor(QPalette::Text, textColor);
            QApplication::style()->drawControl(QStyle::CE_ItemViewItem, &opt, painter);
        } else {
            QStyledItemDelegate::paint(painter, option, index);
        }
    }

    bool is_set_under_line = false;
    Qt::GlobalColor textColor = Qt::black;
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



//    ui->enter_button->setStyleSheet("QPushButton {"
//                            "    border: none;"  // Удаляем границы кнопки
//                            "}"
//                            "QPushButton::icon {"
//                            "    padding: 0px;"  // Устанавливаем отступы для иконки
//                            "}");

//       // Устанавливаем иконку для кнопки
//       QIcon icon(":/resource/image/enter.png"); // Путь к изображению
//        ui->enter_button->setIcon(icon);

//       // Устанавливаем размер иконки
//       QSize iconSize(32, 32); // Ширина и высота иконки
//       ui->enter_button->setIconSize(iconSize);
//       ui->enter_button->setFixedSize(iconSize);

//       QWidget *loginWidget = new QWidget();
//       QHBoxLayout *layout = new QHBoxLayout(loginWidget);



//       layout->addWidget(ui->enter_button);
//       layout->setAlignment(Qt::AlignRight | Qt::AlignTop); // Выравнивание кнопки по правому верхнему углу
//       loginWidget->setLayout(layout);

//       // Установка виджета в строку меню
//       ui->menubar->setCornerWidget(loginWidget);



    ui->menubar->addSeparator(); // Добавляем разделитель


    ui->menubar->setCornerWidget(ui->enter_button, Qt::TopRightCorner);

    //ui->toolBar->hide();

    connect(enter, &Enter::loginSuccess, this, &MainWindow::get_users_from_enter);
    //ui->action->setVisible(false)
    //QHeaderView *header = ui->tableData->horizontalHeader();
            // Устанавливаем режим изменения размеров секций на Stretch
    //header->setSectionResizeMode(QHeaderView::Stretch);

    //ui->tableData->setEditTriggers(QAbstractItemView::DoubleClicked |
    //                                  QAbstractItemView::EditKeyPressed |
    //                                  QAbstractItemView::AnyKeyPressed);








    //QTabWidget *tabWidget = new QTabWidget(this);
    setCentralWidget(ui->tabWidget);

    QWidget *tabsWidget = new QWidget();
    QVBoxLayout *tabsLayout = new QVBoxLayout(tabsWidget);
    tabsLayout->setContentsMargins(0, 0, 0, 0);
    tabsWidget->setLayout(tabsLayout);
    ui->tabWidget->setCornerWidget(tabsWidget, Qt::TopLeftCorner);

    QIcon icon(":/resource/image/free-icon-tab-7588946.png"); // Путь к изображению

    QPushButton *addTabButton = new QPushButton(tabsWidget);
    addTabButton->setIcon(icon); // УстановкКа иконки на кнопку
    // addTabButton->setIconSize(addTabButton->size());
    int buttonSize = 35;
    int iconSize = buttonSize - 10;

    addTabButton->setFixedSize(buttonSize, buttonSize);

    addTabButton->setIconSize(QSize(iconSize, iconSize));

    addTabButton->setAttribute(Qt::WA_TranslucentBackground, true);    // Отключаем рамку кнопки
    addTabButton->setStyleSheet("QToolButton { border: none; }" // Стиль кнопки без рамки
                          "QToolButton:hover { background-color: lightblue; }"); // Стиль кнопки при наведении


    tabsLayout->addWidget(addTabButton);
    connect(addTabButton, &QPushButton::clicked, this, &MainWindow::addNewTab);
}



void MainWindow::addNewTab()
{
    // Создаем новую вкладку
    QWidget *newTab = new QWidget();
    ui->tabWidget->addTab(newTab, "Новая вкладка");
    ui->tabWidget->setTabsClosable(true);
}





void MainWindow::get_users_from_enter(const User& user){
    this->user = user;
}





MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_pushButton_clicked()
//{
//    enter = new Enter(this);
//    enter->setModal(true);
//    enter->exec();
//}


void MainWindow::on_enter_button_clicked()
{
    enter = new Enter(this);
    enter->setModal(true);
    enter->exec();
}



void MainWindow::on_category_triggered()
{
    Category category;
    QTableView *table = create_table();

    table->setModel(category.read_from_db());

    table->setItemDelegateForColumn(0, new OrderDelegate(this));
    table_data = table;
}


void MainWindow::on_contractors_triggered()
{
    Contractors actors;
    QTableView *table = create_table();
    table->setModel(actors.read_from_db());
    table->setItemDelegateForColumn(0, new OrderDelegate(this));
    table_data = table;
}


void MainWindow::on_Users_triggered()
{
    User users;
    QTableView *table = create_table();
    table->setModel(users.read_from_db());
    table->setItemDelegateForColumn(0, new OrderDelegate(this));
    table_data = table;
}


void MainWindow::on_units_of_measurement_triggered()
{
    Units_of_measurement units;
    QTableView *table = create_table();
    table->setModel(units.read_from_db());
    table->setItemDelegateForColumn(0, new OrderDelegate(this));
    table_data = table;
}


void MainWindow::on_goods_triggered()
{
    Goods goods;
    QTableView *table = create_table();
    QSqlTableModel* model = goods.read_from_db();

    model->removeColumn(6);
    model->removeColumn(6);
    model->removeColumn(6);
    model->removeColumn(6);

    model->setHeaderData(0, Qt::Horizontal, "Артикул");
    model->setHeaderData(1, Qt::Horizontal, "Контрагенты");
    model->setHeaderData(2, Qt::Horizontal, "ЕИ");
    model->setHeaderData(3, Qt::Horizontal, "Категория");
    model->setHeaderData(4, Qt::Horizontal, "Статус");
    model->setHeaderData(5, Qt::Horizontal, "Название товара");







    table->setModel(model);

    table->setItemDelegateForColumn(0, new OrderDelegate(this));
    table->horizontalHeader()->swapSections(1, 5);
    table->horizontalHeader()->swapSections(4, 5);

    table->horizontalHeader()->setSectionsMovable(true);

    OrderDelegate* deleg = new OrderDelegate(this);
    deleg->is_set_under_line =true;
    deleg->textColor = Qt::blue;
    table->setItemDelegateForColumn(0, deleg);

    table_data = table;



    connect(table, &QTableView::clicked, this, &MainWindow::onGoodsClicked);
}

void MainWindow::onGoodsClicked(const QModelIndex &index) {
}



void MainWindow::on_status_goods_triggered()
{
    Status_good status;
    QTableView *table = create_table();
    table->setModel(status.read_from_db());
    table->setItemDelegateForColumn(0, new OrderDelegate(this));
    table_data = table;
}


void MainWindow::on_status_order_triggered()
{
    Status_order order;
    QTableView* table = create_table();
    table->setModel(order.read_from_db());
    table->setItemDelegateForColumn(0, new OrderDelegate(this));
    table_data = table;
}


void MainWindow::on_Rights_triggered()
{
    Rights rights;
    QTableView *table = create_table();
    table->setModel(rights.read_from_db());
    table->setItemDelegateForColumn(0, new OrderDelegate(this));
    table_data = table;
}


void MainWindow::on_Role_triggered()
{
    Role role;
    QTableView *table = create_table();
    table->setModel(role.read_from_db());
    table->setItemDelegateForColumn(0, new OrderDelegate(this));
    table_data = table;
}


void MainWindow::on_shipment_triggered()
{
    Shipment sipm;
    QTableView* table = create_table();
    table->setModel(sipm.read_from_db());
    table->setItemDelegateForColumn(0, new OrderDelegate(this));
    table_data = table;
}


void MainWindow::on_orders_triggered()
{
    Orders order;
    QTableView* table = create_table();
    table->setModel(order.read_from_db());

    OrderDelegate* deleg = new OrderDelegate(this);
    deleg->is_set_under_line =true;
    deleg->textColor = Qt::blue;
    table->setItemDelegateForColumn(0, deleg);

    table_data = table;




    connect(table, &QTableView::clicked, this, &MainWindow::onOrderClicked);
}

void MainWindow::onOrderClicked(const QModelIndex &index) {
    if (index.isValid()) {
        int column = index.column();
        if (column == 0){
            int orderId = index.data(Qt::DisplayRole).toInt(); // Получаем номер заказа
            Orders order;

            // Создаем и настраиваем QTableView для отображения данных
            QTableView* tableData = new QTableView;
            tableData->setModel(order.get_goods_from_order(orderId));

            // Создаем новую вкладку
            QWidget* newTab = new_tab();
            // Устанавливаем QTableView на новую вкладку
            QVBoxLayout *layout = new QVBoxLayout(newTab);
            layout->addWidget(tableData);
            newTab->setLayout(layout);

            QFont font = tableData->font();
            font.setPointSize(14); // Устанавливаем размер шрифта 14
            font.setFamily("ubuntu");
            tableData->setFont(font);



            QHeaderView *header = tableData->horizontalHeader();
            // Устанавливаем режим изменения размеров секций на Stretch
            header->setSectionResizeMode(QHeaderView::Stretch);
        }




    }
}

QWidget * MainWindow::new_tab(){
    QWidget *newTab = new QWidget();
    ui->tabWidget->addTab(newTab, "Новая вкладка");
    ui->tabWidget->setCurrentIndex(ui->tabWidget->indexOf(newTab));
    return newTab;
}


void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);

    if(ui->tabWidget->count() == 1){
        ui->tabWidget->setTabsClosable(false);
    }
}





void MainWindow::on_tabWidget_tabBarDoubleClicked(int index)
{
    // Получаем текущее название вкладки
    QString currentTabText = ui->tabWidget->tabText(index);

    // Отображаем диалоговое окно с запросом на новое название вкладки
    bool ok;
    QString newTabText = QInputDialog::getText(this, "Изменить название вкладки",
                                         "Введите новое название:", QLineEdit::Normal,
                                         currentTabText, &ok);
    // Если пользователь нажал ОК и ввел новое название, устанавливаем его
    if (ok && !newTabText.isEmpty()) {
        ui->tabWidget->setTabText(index, newTabText);
    }
}


QTableView* MainWindow::create_table(){
    QTableView* tableData;

    QWidget* currentTab = ui->tabWidget->currentWidget();



    QTableView* existingTableView = currentTab->findChild<QTableView*>();
    if (existingTableView) {
        delete existingTableView;
    }


    // Создаем QTableView на текущей вкладке
    tableData = new QTableView(currentTab);

    // Устанавливаем QTableView на текущую вкладку
    QVBoxLayout* layout = nullptr;
        if (currentTab->layout()) {
            layout = qobject_cast<QVBoxLayout*>(currentTab->layout());
        } else {
            // Если макета нет, создаем новый
            layout = new QVBoxLayout(currentTab);
            currentTab->setLayout(layout);
        }

        // Очищаем макет и добавляем новый QTableView
        layout->removeWidget(existingTableView);
        layout->addWidget(tableData);



    // Устанавливаем шрифт для QTableView
    QFont font = tableData->font();
    font.setPointSize(14); // Устанавливаем размер шрифта 14
    font.setFamily("ubuntu");
    tableData->setFont(font);

    // Устанавливаем режим изменения размеров секций на Stretch
    QHeaderView *header = tableData->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);

    return tableData;
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    QWidget *currentTab = ui->tabWidget->widget(index);
    // Проверяем, есть ли QTableView на текущей вкладке
    table_data = nullptr;
    if (currentTab) {
        table_data = currentTab->findChild<QTableView *>();
    }
}

