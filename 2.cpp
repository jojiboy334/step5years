#include <iostream>
using namespace std;
int main(void)
{
	float decPound, colvoPen1, colvoPen2, promezhut1, shilling, promezhut2, pens;
	cout << "Enter: ";
	cin >> decPound;
	colvoPen1 = decPound * 240;
	decPound = static_cast<int>(decPound);
	colvoPen2 = decPound * 240;
	promezhut1 = colvoPen1 - colvoPen2;
	promezhut1 = static_cast<int>(promezhut1);
	shilling = promezhut1 / 12;
	shilling = static_cast<int>(shilling);
	promezhut2 = shilling * 12;
	pens = promezhut1 - promezhut2;
	cout << "Result : " << decPound << "." << shilling << "." << pens << endl;
	system("Pause");
}
