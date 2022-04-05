//
// Created by John Garcia on 4/4/22.
//
#include "Contact.h"
#include <QList>
#include <QStringList>

#ifndef HW03_CONTACTLIST_H
#define HW03_CONTACTLIST_H
class ContactList{
private:
    QList<Contact> list;
public:
    ContactList();
    void add(Contact c);
    void remove(Contact c);
    QStringList getPhoneList(int category);
    QStringList getMailingList(int category);
    ContactList operator+=(const Contact* c) {
        list << *c;
    }
    ContactList operator-=(const Contact* c) {
        list.removeOne(*c);
    }
};

#endif //HW03_CONTACTLIST_H
