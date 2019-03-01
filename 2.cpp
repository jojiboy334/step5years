#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	char symbol;
	cout << "Enter the symbol: " << "\n";
	cin >> symbol;
	if (!islower(symbol))
		cout << "0" << endl;
	else cout << "1" << endl;
	system("pause");
}
