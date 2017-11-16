#pragma once
#include "Nag³ówek.h"

ostream & operator<<(ostream &, const Wielomian&);
istream & operator>>(istream &, Wielomian& w);
Wielomian operator+(const Wielomian&, const Wielomian&);
Wielomian operator-(const Wielomian&, const Wielomian&);
Wielomian operator*(const double &, Wielomian&);
Wielomian operator*(const Wielomian&, const Wielomian&);