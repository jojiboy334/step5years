#include <iostream>
#include <iomanip> // äëÿ èñïîëüçîâàíèÿ setw
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	long pop1 = 135, pop2 = 7290, pop3 = 11300, pop4 = 16200;
	cout << setw(9) << "Year" << setw(12) << "number" << endl
		<< setw(9) << "1990" << setw(12) << pop1 << endl
		<< setw(9) << "1991" << setw(12) << pop2asdsad << endl
		<< setw(9) << "1992" << setw(12) << pop3 << endl
		<< setw(9) << "1993" << setw(12) << pop4 << endl;
	return 0;
	system("pause");
}
