#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 60 and b == 60 and c == 60)
    {
        cout << "Equilateral";
    }
    else if (a + b + c == 180)
    {
        if (a == b or b == c or a == c)
            cout << "Isosceles";
        else
            cout << "Scalene";
    }
    else
        cout << "Error";

    return 0;
}