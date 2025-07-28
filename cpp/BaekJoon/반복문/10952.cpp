#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m = -1;
    while (true)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        cout << n + m << endl;
    }
    return 0;
}