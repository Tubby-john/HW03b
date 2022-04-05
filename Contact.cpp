//
// Created by John Garcia on 4/4/22.
//
#include <QString>
#include "Contact.h"

Contact::Contact() {}
Contact::Contact(int cat, QString fn, QString ln, QString add, QString zip, QString _city, QString phone){
    category = cat;
    firstName = fn;
    lastName = ln;
    streetAddress = add;
    zipCode = zip;
    city = _city;
    phoneNumber = phone;
}

QString Contact::toString() {
    return QString("%1, %2, %3, %4, %5, %6, %7").arg(firstName)
                    .arg(lastName)
                    .arg(streetAddress)
                    .arg(zipCode)
                    .arg(city)
                    .arg(phoneNumber);
}

QString Contact::getPhone() {
    return phoneNumber;
}

QString Contact::getMailing() {
    return QString("%1 %2, %3, %4, %5").arg(firstName)
    .arg(lastName)
    .arg(streetAddress)
    .arg(city)
    .arg(zipCode);
}

int Contact::getCategory(){
    return category;
}