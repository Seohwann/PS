#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int p, q;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    int temp;
    for (int i = 0; i < m; i++)
    {
        cin >> p >> q;
        if (p == q)
            continue;
        for (int j = 0; j <= int((q - p) / 2); j++)
        {
            temp = arr[p - 1 + j];
            arr[p - 1 + j] = arr[q - 1 - j];
            arr[q - 1 - j] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}