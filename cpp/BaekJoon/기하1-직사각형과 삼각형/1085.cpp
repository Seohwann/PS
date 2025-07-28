#include <iostream>
using namespace std;

int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int diff[4] = {};
    diff[0] = abs(a);
    diff[1] = abs(b);
    diff[2] = abs(c - a);
    diff[3] = abs(d - b);
    // cout << diff[0] <<endl;
    // cout << diff[1] <<endl;
    // cout << diff[2] <<endl;
    // cout << diff[3] <<endl;
    int min = diff[0];
    ;
    for (int i = 1; i < 4; i++)
    {
        if (min > diff[i])
            min = diff[i];
    }
    cout << min;
}