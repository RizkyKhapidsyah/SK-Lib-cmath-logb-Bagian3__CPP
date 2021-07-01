
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	double x = 43.87, hasil;

	hasil = logb(x);
	cout << "logb(" << x << ") = " << "log(|" << x << "|) = " << hasil << endl;

	x = 11.2;

	hasil = logb(x);
	cout << "logb(" << x << ") = " << "log(|" << x << "|) = " << hasil << endl;

	_getch();
	return 0;
}
