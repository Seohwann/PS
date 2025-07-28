#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0 and b == 0 and c == 0)
            break;
        int max = -1;
        if (max < a)
            max = a;
        if (max < b)
            max = b;
        if (max < c)
            max = c;
        if (max == a)
        {
            if (a >= b + c)
            {
                cout << "Invalid" << endl;
                continue;
            }
        }
        else if (max == b)
        {
            if (b >= a + c)
            {
                cout << "Invalid" << endl;
                continue;
            }
        }
        else
        {
            if (c >= b + a)
            {
                cout << "Invalid" << endl;
                continue;
            }
        }
        if (a == b and b == c)
        {
            cout << "Equilateral" << endl;
        }
        else if (a == b or b == c or a == c)
            cout << "Isosceles" << endl;
        else
            cout << "Scalene" << endl;
    }
    return 0;
}