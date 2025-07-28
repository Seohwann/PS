#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
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
            while (1)
            {
                a--;
                if (a < b + c)
                    break;
            }
        }
    }
    else if (max == b)
    {
        if (b >= a + c)
        {
            while (1)
            {
                b--;
                if (b < a + c)
                    break;
            }
        }
    }
    else
    {
        if (c >= b + a)
        {
            while (1)
            {
                c--;
                if (c < b + a)
                    break;
            }
        }
    }
    cout << a + b + c;
    return 0;
}