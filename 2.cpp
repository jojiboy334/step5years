#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double Celsius;
    cout << "Enter temperature in Celsius" << "\n";
	cin >> Celsius;
	cout << "temperature in fahrenheit equals " << Celsius * (9. / 5) + 32 << "\n";
	system("pause");
}
