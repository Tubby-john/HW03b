#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <QString>
#include "Contact.cpp"
#include "ContactList.h"
#include "ContactFactory.h"
#include "Fraction.h"

void createRandomContacts(ContactList& cl, int n=10) {
    static ContactFactory cf;
    for (int i=0; i<n; ++i) {
        cf >> cl; 1
    }
}

int main() {
    QTextStream cout(stdout);

    ContactList myContacts;
    Contact Peter = Contact(1, "Peter", "Martin", "450 Bark St.", "02777", "Swansea", "7746274591");
    cout << Peter.toString() << endl;
    myContacts.add(Peter);
    QStringList phone = myContacts.getPhoneList(1);
    foreach(QString num, phone){
        cout << num << endl;
    }

    return 0;
}
