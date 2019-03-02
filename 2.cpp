#include <iostream>
using namespace std;
int main()
{
	double n1, n2, ans;
	char oper, ch;
	do {
		cout << "\Enter the first operand, the operation, the second operand: " << "\n";
		cin >> n1 >> oper >> n2;
		switch (oper)
		{
		case '+':ans = n1 + n2; break;
		case '-':ans = n1 - n2; break;
		case '*':ans = n1 * n2; break;
		case '/':ans = n1 / n2; break;
		default:ans = 0;
		}
		cout << "Answer = " << ans << "\n";
		cout << "\Continue? (Enter 'y' or 'n')?" <<"\n";
		cin >> ch;
	} while (ch != 'n');
	return 0;
}
