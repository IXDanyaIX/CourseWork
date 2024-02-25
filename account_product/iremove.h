#ifndef IREMOVE_H
#define IREMOVE_H
#include <QObject>

class IRemove: public QObject
{
    Q_OBJECT
public:
    virtual void remove_from_users() const =0;
};

#endif // IREMOVE_H
