#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	int a, b, c, d;

	cout << "enter the numerator of the first fraction" << endl;
	cin >> a;
	cout << "enter the denominator of the first fraction" << endl;
	cin >> b;
	cout << "enter the numerator of the second fraction" << endl;
	cin >> c;
	cout << "enter the denominator of the second fraction" << endl;
	cin >> d;
	cout << "the sum of fractions is equal to " << (a*d + b * c) << "/" << (b*d) << endl;
	system("pause");
}
