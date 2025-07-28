#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, area = 0;
    int arr[100][100];
    cin >> n;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            arr[i][j] = 0;
        }
    }
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        for (int j = x; j < x + 10; j++)
        {
            for (int k = y; k < y + 10; k++)
            {
                arr[j][k] = 1;
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (arr[i][j] == 1)
                area++;
        }
    }
    cout << area;

    return 0;
}