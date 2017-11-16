#pragma once
#include "Nag³ówek.h"
#include "operatory.h"


ostream & operator<<(ostream & wyjscie, const Wielomian& wielomian)
{

	for (unsigned i = 0; i <= wielomian.stopien; i++) {
		
		wyjscie << wielomian.wielomianTab[wielomian.stopien - i] << (i < wielomian.stopien ? "x^" : "");
		if (wielomian.stopien > i)cout << wielomian.stopien - i;
		cout << ((wielomian.stopien - i) ? " + " : " ");
	}
	wyjscie << endl;
	return wyjscie;
}

std::istream & operator>>(std::istream & input, Wielomian& w)
{
	std::cout << "Stopien:";
	input >> w.stopien;
	w.wielomianTab = new double[w.stopien];
	for (unsigned i = 0; i <= w.stopien; i++)
	{
		cout << "X^" << w.stopien - i << ":";
		input >> w.wielomianTab[i];
	}
	return input;
}



Wielomian operator+(const Wielomian& a, const Wielomian& b)
{
	Wielomian out;
	out.stopien = (a.stopien > b.stopien ? a.stopien : b.stopien);
	out.wielomianTab = new double[out.stopien];

	for (unsigned i = 0; i <= out.stopien; i++) {
		out.wielomianTab[i] = ((a.stopien >= i ? a.wielomianTab[i] : 0) + (b.stopien >= i ? b.wielomianTab[i] : 0));
	}

	return out;
}

Wielomian operator-(const Wielomian& a, const Wielomian& b)
{
	Wielomian out;
	out.stopien = (a.stopien > b.stopien ? a.stopien : b.stopien);
	out.wielomianTab = new double[out.stopien];

	for (unsigned i = 0; i <= out.stopien; i++) {
		out.wielomianTab[i] = ((a.stopien >= i ? a.wielomianTab[i] : 0) - (b.stopien >= i ? b.wielomianTab[i] : 0));
	}

	return out;
}

Wielomian operator*(const Wielomian& a, const Wielomian& b)
{
	double *tab = new double[a.stopien*b.stopien];
	int *stopien = new int[a.stopien*b.stopien];

	int wiekszy = (a.stopien > b.stopien ? a.stopien : b.stopien);
	int mniejszy = (a.stopien < b.stopien ? a.stopien : b.stopien);

	for (unsigned i = 0; i <= a.stopien; i++) {
		for (unsigned j = 0; j <= b.stopien; i++)
		{
			tab[j + b.stopien*i] = a.wielomianTab[i] * b.wielomianTab[j];
			stopien[j + b.stopien*i] = i*j;
		}
	}

	//cout << tab[i*j];
	Wielomian out;
	out.stopien = a.stopien*b.stopien;
	for (unsigned i = 0; i <= a.stopien*b.stopien; i++) {




		return out;
	}
}

Wielomian operator*(const double &multiplier, Wielomian& source)
{

	for (unsigned i = 0; i <= source.stopien; i++)source.wielomianTab[i] *= multiplier;
	return source;
}

