#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    if (b - 45 < 0)
    {
        if (a == 0)
            a = 24;
        cout << a - 1 << " " << b + 15;
    }
    else
        cout << a << " " << b - 45;
}