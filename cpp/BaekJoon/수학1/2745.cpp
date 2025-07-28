#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string n;
    cin >> n;
    int b;
    int rem, quan = -1;
    cin >> b;
    int res = 0;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] >= '0' && n[i] <= '9')
            n[i] -= '0';
        else
            n[i] -= 'A' - 10;
    }
    for (int i = 0; i < n.size(); i++)
    {
        int index = n.size() - 1 - i;
        rem = n[index] % b;
        res += rem * static_cast<int>(pow(b, i));
        // cout << "n[i]: " << (int)n[index] << " pow: " << static_cast<int>(pow(b, i)) << endl;

        quan = n[index] / b;
    }
    cout << res << endl;
    return 0;
}