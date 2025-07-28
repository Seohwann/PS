#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    // int n, m;
    // cin >> n >> m;
    // int p, q;
    int *arr = new int[42];
    for (int i = 0; i < 42; i++)
        arr[i] = 0;
    int temp;

    for (int i = 0; i < 10; i++)
    {
        cin >> temp;
        arr[temp % 42]++;
    }
    int count = 0;
    for (int i = 0; i < 42; i++)
    {
        if (arr[i] != 0)
            count++;
    }
    cout << count;

    delete[] arr;
    return 0;
}