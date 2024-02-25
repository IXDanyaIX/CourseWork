#ifndef IADD_H
#define IADD_H
#include <QObject>

class IAdd: public QObject
{
    Q_OBJECT
public:
    virtual void add_to_db() const =0;
};

#endif // IADD_H
