#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;
    int x, y;
    int minx = 10001;
    int miny = 10001;
    int maxx = -10001;
    int maxy = -10001;
    for (int i = 0; i < a; i++)
    {
        cin >> x >> y;
        if (minx > x)
            minx = x;
        if (miny > y)
            miny = y;
        if (maxx < x)
            maxx = x;
        if (maxy < y)
            maxy = y;
    }
    // cout << maxx << endl;
    // cout << maxy << endl;
    // cout << minx << endl;
    // cout << miny << endl;
    int area = (maxx - minx) * (maxy - miny);
    cout << area;
}