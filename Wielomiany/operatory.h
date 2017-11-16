#pragma once
#include "Nag��wek.h"

ostream & operator<<(ostream &, const Wielomian&);
istream & operator>>(istream &, Wielomian& w);
Wielomian operator+(const Wielomian&, const Wielomian&);
Wielomian operator-(const Wielomian&, const Wielomian&);
Wielomian operator*(const double &, Wielomian&);
Wielomian operator*(const Wielomian&, const Wielomian&);