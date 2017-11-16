#pragma once
#include "Nag³ówek.h"

class Wielomian
{
	double * wielomianTab;
	unsigned stopien;
public:
	Wielomian operator=(const Wielomian&);
	friend Wielomian operator+(const Wielomian&, const Wielomian&);
	friend Wielomian operator-(const Wielomian&, const Wielomian&);
	friend Wielomian operator*(const Wielomian&, const Wielomian&);
	friend Wielomian operator*(const double&, Wielomian&);
	friend std::ostream& operator<<(std::ostream &wyjscie, const Wielomian&);
	friend std::istream& operator>>(std::istream &input, Wielomian&);
	operator int() { return static_cast<int>(stopien); };
	Wielomian(unsigned);
	Wielomian();
	~Wielomian();
};

