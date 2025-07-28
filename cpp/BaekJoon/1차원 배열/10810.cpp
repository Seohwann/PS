#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int p, q, k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = 0;

    for (int i = 0; i < m; i++)
    {
        cin >> p >> q >> k;
        for (int j = p - 1; j < q; j++)
            arr[j] = k;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            cout << arr[i] << " ";
        else
            cout << 0 << " ";
    }

    delete[] arr;
    return 0;
}