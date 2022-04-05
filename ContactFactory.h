//
// Created by John Garcia on 4/4/22.
//
#include "ContactList.h"
#ifndef HW03_CONTACTFACTORY_H
#define HW03_CONTACTFACTORY_H
class ContactFactory{
private:
    Contact c = Contact();
public:
    ContactFactory();
    int generateCat();
    QString generateFN();
    QString generateLN();
    QString generateAdd();
    QString generateZip();
    QString generateCity();
    QString generatePhone();
};
#endif //HW03_CONTACTFACTORY_H
