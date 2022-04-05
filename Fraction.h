//
// Created by John Garcia on 4/4/22.
//
#include <QString>
#ifndef HW03_FRACTION_H
#define HW03_FRACTION_H

class Fraction{
private:
    int m_numerator;
    int m_denominator;
public:
    Fraction();
    Fraction(int numerator, int denominator);
    void set(int numerator, int denominator);
    QString toString();
    double toDouble();
    Fraction add(const Fraction& other);
    Fraction subtract(const Fraction& other);
    Fraction multiply(const Fraction& other);
    Fraction divide(const Fraction& other);
    Fraction operator + (const Fraction& other){
        return this->add(other);
    }
    Fraction operator - (const Fraction& other){
        return this->subtract(other);
    }
    Fraction operator / (const Fraction& other){
        return this->divide(other);
    }
    Fraction operator * (const Fraction& other){
        return this->multiply(other);
    }

};

#endif //HW03_FRACTION_H
