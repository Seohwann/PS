#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n, m;
    cin >> n >> m;
    char temp1, temp2;
    temp1 = n[2];
    n[2] = n[0];
    n[0] = temp1;

    temp2 = m[2];
    m[2] = m[0];
    m[0] = temp2;

    if (stoi(n) < stoi(m))
        cout << m;
    else
        cout << n;

    return 0;
}
