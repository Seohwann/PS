#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    string str;
    cin >> str;
    int *arr = new int[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = str[i] - 48;
        // cout << arr[i] << endl;
        sum += arr[i];
    }
    cout << sum;
    delete[] arr;
    return 0;
}