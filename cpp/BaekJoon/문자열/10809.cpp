#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n = 26;
    string str;
    cin >> str;
    int *arr = new int[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }
    char temp;
    for (int i = 0; i < str.size(); i++)
    {
        temp = str[i];
        if (arr[temp - 97] != -1)
            continue;
        arr[temp - 97] = i;
        // cout << arr[i] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}