#include <iostream>
#include <iomanip> // для использования setw
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	cout << setiosflags(ios::left) << setw(9) << "Surname"<< setw(12) << "Name" << setw(12) << "Adress" << setw(12) << "City" << endl << "------------------------------------------------"<< endl <<
		                           setw(9) << "Petrov" << setw(12) << "Vasiliy" <<  setw(12) << "asddsasd" << setw(12) << "Saint-Petersburg" << endl
		                           << setw(9) << "Ivanov" << setw(12) << "Sergay" << setw(12) << "asdasdasd" << setw(12) << "Nahodka" << endl
		                           << setw(9) << "Sidorov"<< setw(12) << "Ivan" << setw(12) << "asdasdasd" << setw(12) << "Kaliningrad" << endl;
	system("pause");
	return 0;
}
