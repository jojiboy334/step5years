#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	cout << "Enter the number of pounds" << "\n";
	cin >> a;
	cout << "Enter the number of shillings" << "\n";
	cin >> b;
	cout << "Enter the number of pence" << "\n";
	cin >> c;
	b = b+(a * 20);
	c = c+(b * 12);
	cout << "Decimal pounds: "<< c/240 << "\n";


	system("pause");
}
