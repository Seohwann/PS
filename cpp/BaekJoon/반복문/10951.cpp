#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m = -1;
    while (cin >> n >> m)
    {
        cout << n + m << endl;
    }
    return 0;
}