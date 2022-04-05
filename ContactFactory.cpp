//
// Created by John Garcia on 4/4/22.
//

#include "ContactList.h"
#include "Contact.h"
#include "ContactFactory.h"

ContactFactory::ContactFactory() {
    c = Contact(generateCat(), generateFN(), generateLN(), generateAdd(), generateZip(), generateCity(), generatePhone()));
}

int ContactFactory::generateCat() {
    return rand()%100+1;
}

QString ContactFactory::generateFN() {
    QString first[8] = {"John",
                    "Connor",
                    "Liam",
                    "Maccon",
                    "Jacob",
                    "Harry",
                    "Peter",
                    "Jordan"
                    };
    return first[((rand()%first->size()) + 1)];
}

QString ContactFactory::generateLN() {
    QString last[8] = {"Platt",
                    "Garcia",
                    "Martin",
                    "White",
                    "Boutin",
                    "Monteiro",
                    "Reed",
                    "Grant"};
    return last[(rand()%last->size()+1)];
}

QString ContactFactory::generateAdd(){
    QString Address[8] = {"161 Calamet st.",
                          "10 West st.",
                          "16 Miller ave.",
                          "1509 Monterio dr.",
                          "450 Bark st.",
                          "70 School st.",
                          "16 Calef ave.",
                          "120 West ln.",
                          };
    return Address[rand()%Address->size()+1];
}

QString ContactFactory::generateZip() {
    QString zip[8] = {"02777",
                      "02128",
                      "03190",
                      "01290",
                      "81902",
                      "91038",
                      "12345",
                      "01234",
                      "67890"};
    return zip[rand()%zip->size()+1];
}

QString ContactFactory::generateCity() {
    QString city[8]= {"Swansea",
                    "Boston",
                    "Fall River",
                    "Seekonk",
                    "Providence",
                    "Attleboro",
                    "Dighton",
                    "Rehoboth",
                    "Danvers"};
    return city[rand()%city->size()+1];
}

QString ContactFactory::generatePhone() {
    QString phone[8] = {"774-627-4591",
                        "664-528-9027",
                        "001-002-0004",
                        "289-769-4901",
                        "410-790-6301",
                        "092-312-5420",
                        "754-321-6841",
                        "901-232-2341",
                        "103-390-2309"};
    return phone[rand() % phone->size() + 1];
}

ContactFactory operator>>(ContactList& cl){
    cl.add(c);
}