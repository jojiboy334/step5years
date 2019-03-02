#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Press 1 to convert the Celsius scale to the Fahrenheit scale\nPress 2 to convert the Fahrenheit scale to the Celsius scale: " << "\n";
	int n;
	double f;
		double c;
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "Enter the Celsius temperature: " << "\n";
		cin >> c;
		cout << "Fahrenheit temperature will be "<< c*(9./5)+32 << "\n";
		break;
	case 2:
		cout << "Enter the Fahrenheit temperature: " << "\n";
		cin >> f;
		cout << "Celsius temperature will be "<< (f-32)*5/9 << endl;
		break;
	default:
		cout << "You entered an invalid number" << endl;
		break;
	}
	system("pause");
}
