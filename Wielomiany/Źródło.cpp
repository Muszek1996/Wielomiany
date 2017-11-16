#include "Nagłówek.h"


int main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	Wielomian a(4), b(n);
	cout << a << endl;
	cout << b << endl;
	cout << a + b;
	cout << a - b;
	cout << 0.0 * b;
	cout << static_cast<int> (a);
	//cout << a * b;

	getchar();
	char flag = 'y';
	while (flag == 'y' || flag == 'Y') {
		system("cls");
		Wielomian wA, wB;
		unsigned liczba;
		cin >> wA;
		cin >> wB;
		cout << "podj liczbê:";
		cin >> liczba;

		cout << "dodawanie : ";
		cout << wA + wB << endl;
		cout << "odejmowanie : ";
		cout << wA - wB << endl;
		cout << "mno¿enie przez liczbê" << liczba << " :";
		cout << static_cast<double>(liczba) * wB << endl;
		cout << "mno¿enie wielomianów : ";
		//cout << wA * wB << endl;


		cout << "Czy chcesz kontynuowaæ? (y/Y):";
		cin >> flag;
	}




	return 0;
}
