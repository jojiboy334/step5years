#include <iostream>
using namespace std;

int main(void)
{
    const int ten = 10;
    int temporary = 20, tempTwenty;
    cout << ten << endl;
    tempTwenty = temporary;
    cout << tempTwenty << endl;
    cout << --temporary << endl;
    system("pause");
}
