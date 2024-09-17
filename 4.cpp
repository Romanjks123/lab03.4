// Lab_03_4.cpp
// < Огоновський Роман >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 24

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double R;

	cout << "x= "; cin >> x;
	cout << "y= "; cin >> y;
	cout << "R= "; cin >> R;


	if ((((x * x) + (y * y)) <= R * R && y >= 0) || (-R <= x && x <= 0) && y >= -x && y <= 0)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	cin.get();
	return 0;


}