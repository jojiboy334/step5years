#include <iostream>
using namespace std;
void main() {
    setlocale(LC_ALL, "Russian");
    double const fut = 7.481;
    int gal;
    cout << "Vvedite kol-vo galonov" << endl;
    cin >> gal;
    cout << "Obem v kubicheskih futah =" << gal / fut << endl;
    system("pause");

}
