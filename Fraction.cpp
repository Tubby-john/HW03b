//
// Created by John Garcia on 4/4/22.
//

#include "Fraction.h"
#include <QString>

Fraction::Fraction() {}
Fraction::Fraction(int numerator, int denominator) : m_numerator(numerator),m_denominator(denominator) {}
void Fraction::set(int numerator, int denominator) {
    m_numerator = numerator;
    m_denominator = denominator;
}
QString Fraction::toString() {
    return QString("%1/%2").arg(m_numerator)
                            .arg(m_denominator);
}
double Fraction::toDouble() {
    double i = m_numerator/m_denominator;
    return i;
}

Fraction Fraction::add(const Fraction& other){
    int numer = this->m_numerator+other.m_numerator;
    int denom = this->m_denominator+other.m_denominator;
    return Fraction(numer, denom);
}

Fraction Fraction::subtract(const Fraction &other) {
    int numer = this->m_numerator-other.m_numerator;
    int denom = this->m_denominator-other.m_denominator;
    return Fraction( numer, denom);
}

Fraction Fraction::multiply(const Fraction &other) {
    int numer = this->m_numerator*other.m_numerator;
    int denom = this->m_denominator*other.m_denominator;
    return Fraction(numer, denom);
}

Fraction Fraction::divide(const Fraction &other) {
    int numer = this->m_numerator*other.m_denominator;
    int denom = this->m_denominator*other.m_numerator;
    return Fraction(numer, denom);
}
