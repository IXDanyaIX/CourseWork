#ifndef IDELETE_H
#define IDELETE_H
#include <QObject>

class IDelete: public QObject
{
    Q_OBJECT
public:
    virtual void delete_from_db() const =0;
};

#endif // IDELETE_H
