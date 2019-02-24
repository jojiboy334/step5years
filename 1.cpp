#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "Russian");
	double const fut = 7.481;
	int gal;
	cout << "¬ведите кол-во галлонов" << endl;
	cin >> gal;
	cout << "ќбъем в кубических футах равен " << gal / fut << endl;
	system("pause");
		
}
