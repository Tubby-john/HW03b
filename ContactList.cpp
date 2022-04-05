//
// Created by John Garcia on 4/4/22.
//
#include "ContactList.h"
#include <QString>

ContactList::ContactList(){
}

void ContactList::add(Contact c) {
    list += c;
}
void ContactList::remove(Contact c) {
    list.removeOne(c);
}

QStringList ContactList::getMailingList(int category) {
    QStringList listOfStrings;
    for(int i = 0; i < list.size(); i++){
        listOfStrings << list[i].getMailing();
    }
    return listOfStrings;
}

QStringList ContactList::getPhoneList(int category) {
    QStringList listOfStrings;
    for(int i = 0; i < list.size(); i++){
        if(list[i].getCategory() == category){
            listOfStrings << list[i].getPhone();
        }
    }
    return listOfStrings;
}