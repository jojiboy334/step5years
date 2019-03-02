#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	setlocale(LC_ALL, "Russian");
	unsigned long number;
	cout << "Enter the number" << "\n";
	cin >> number;

	for (int j = 1; j <= 200; j++)
	{
		cout << setw(5) << j * number << " ";
		if (j % 10 == 0)
			cout << endl;
	}
	system("pause");
	return 0;
}
