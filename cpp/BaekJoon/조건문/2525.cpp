#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b;
    cin >> c;
    if (b + c >= 60)
    {
        int num = (b + c) / 60;
        if (a + num >= 24)
            a = a - 24;
        cout << a + num << " " << (b + c) % 60;
    }
    else
        cout << a << " " << b + c;
}