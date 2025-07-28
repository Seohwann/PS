#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }

    int **b = new int *[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = new int[m];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            a[i][j] += b[i][j];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; ++i)
    {
        delete[] a[i];
        delete[] b[i];
    }

    delete[] a;
    delete[] b;
    return 0;
}