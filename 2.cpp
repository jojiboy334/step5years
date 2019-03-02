#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
	char ch;
	unsigned long total = 0;
	cout << "\nВведите число:";
	while ((ch = getche()) != '\r')
		total = total * 10 + ch - '0';
	cout << "\nПолучилось число:" << total << endl;
	return 0;
}
