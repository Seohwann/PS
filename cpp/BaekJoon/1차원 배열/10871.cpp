#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int num;
    int arr[10001] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[i] = num;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < m)
            cout << arr[i] << " ";
    }

    return 0;
}