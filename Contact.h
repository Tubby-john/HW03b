//
// Created by John Garcia on 4/4/22.
//
#include <QString>
#ifndef HW03_CONTACT_H
#define HW03_CONTACT_H

class Contact{
private:
    int category;
    QString firstName;
    QString lastName;
    QString streetAddress;
    QString zipCode;
    QString city;
    QString phoneNumber;
public:
    Contact();
    Contact(int cat, QString fn, QString ln, QString add, QString zip, QString city, QString phone);
    QString toString();
    QString getPhone();
    QString getMailing();
    int getCategory();
    bool operator==(const Contact & c) const {
        if(this == &c) {
            return true;
        } else {
            return false;
        }
    }
};

#endif //HW03_CONTACT_H
