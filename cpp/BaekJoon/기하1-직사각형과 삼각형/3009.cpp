#include <iostream>
using namespace std;

int main()
{

    int a, b, c, d, e, f;
    cin >> a >> b;
    cin >> c >> d;
    cin >> e >> f;
    int x, y;
    if (a == c)
    {
        if (b == f)
            y = d;
        else if (d == f)
            y = b;
        x = e;
    }
    else if (b == d)
    {
        if (a == e)
            x = c;
        else if (c == e)
            x = a;
        y = f;
    }
    else if (a != c and b != d)
    {
        x = a + c - e;
        y = b + d - f;
    }
    cout << x << " " << y;
}