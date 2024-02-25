#include "database.h"

Database::Database(QObject *parent): QObject{parent}
{
    m_database = QSqlDatabase::addDatabase("QPSQL");
    m_database.setConnectOptions();
    m_database.setHostName("localhost");
    m_database.setDatabaseName("account_product");
    m_database.setUserName("postgres");
    m_database.setPassword("1234");
    m_database.setPort(5432);

}

Database::~Database(){

    closeConnection();
}

void Database::openConnection(){

    if (!m_database.isOpen())
    {
       if(!m_database.open()){
           qDebug() << "Error_connect_database\n";
       }
       else qDebug() << "Conect_database\n";
    }


}

void Database::closeConnection(){
    if(m_database.isOpen()){
        m_database.close();
    }
}
