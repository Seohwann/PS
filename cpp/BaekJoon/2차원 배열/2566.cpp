#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[9][9];
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            cin >> arr[i][j];
        }
    }

    int max = -1;
    int x, y;
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                x = i + 1; // 1-based index
                y = j + 1; // 1-based index
            }
        }
    }
    cout << max << endl;
    cout << x << " " << y << endl;
    return 0;
}