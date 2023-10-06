// Lab_03_4.cpp
// < Пилипака Маргарита Василівна >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.20
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if ((y >= (x - 2) * (x - 2)-3 && y <= x && y>=0) ||
		(y >=  (x - 2) * (x - 2)-3 && y <= -x && x >= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
