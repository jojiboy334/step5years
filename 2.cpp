#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const double funt = 1.487;
	const double frank = 0.172;
	const double reikhmark = 0.584;
	const double japyena = 0.00955;
	int dollar;
	cout << "Enter sum in dollars: " << "\n";
	cin >> dollar;
	cout << "Sum in funts will be => " << dollar/funt << "\n";
	cout << "Sum in franks will be => " << dollar/frank << "\n";
	cout << "Sum in reikhmarks will be => " << dollar/reikhmark << "\n";
	cout << "Sum in japyens will be => " << dollar/japyena << "\n";
	system("pause");
}
