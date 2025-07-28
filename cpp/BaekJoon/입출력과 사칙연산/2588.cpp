#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int num1, num2, num3;
    cin >> a;
    cin >> b;

    num1 = b / 100;
    num2 = (b % 100) / 10;
    num3 = (b % 100) % 10;

    cout << a * num3 << endl;
    cout << a * num2 << endl;
    cout << a * num1 << endl;
    cout << a * b;
    return 0;
}