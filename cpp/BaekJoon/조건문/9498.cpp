#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;
    if (a >= 90 and a <= 100)
        cout << "A";
    else if (a >= 80 and a < 90)
        cout << "B";
    else if (a >= 70 and a < 80)
        cout << "C";
    else if (a >= 60 and a < 70)
        cout << "D";
    else
        cout << "F";
}