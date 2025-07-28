#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    // int n, m;
    // cin >> n >> m;
    // int p, q;
    int *arr = new int[30];
    for (int i = 0; i < 30; i++)
        arr[i] = 1;
    int temp;

    for (int i = 0; i < 28; i++)
    {
        cin >> temp;
        arr[temp - 1] = 0;
    }
    for (int i = 0; i < 30; i++)
    {
        if (arr[i] == 1)
            cout << i + 1 << endl;
    }

    delete[] arr;
    return 0;
}