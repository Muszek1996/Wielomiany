#include "wielomian.h"
#include "Nag³ówek.h"


random_device rd;
uniform_int_distribution<int> gen(-5, 5);

Wielomian::Wielomian()
{
}


Wielomian::~Wielomian()
{
	//delete[] wielomianTab;
}


Wielomian Wielomian::operator=(const Wielomian & source)
{
	Wielomian *output = new Wielomian[source.stopien];
	for (unsigned i = 0; i < source.stopien; i++)
		output->wielomianTab[i] = source.wielomianTab[i];
	output->stopien = source.stopien;
	return *output;
}

Wielomian::Wielomian(unsigned st)
{
	wielomianTab = new double[st];
	stopien = st;
	for (unsigned i = 0; i <= st; i++)wielomianTab[i] = static_cast<double>(gen(rd));
}
