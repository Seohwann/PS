#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a;
    cin >> a;
    int n, m = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> n >> m;
        cout << "Case #" << i + 1 << ": " << n + m << "\n";
    }

    return 0;
}