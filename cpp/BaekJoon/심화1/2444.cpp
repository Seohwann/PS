#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    string *arr = new string[n];
    string str;
    for (int i = 0; i < n; i++)
    {
        cout.width(n + i);

        str = "";
        for (int k = 0; k < (n - i - 1); k++)
        {
            str += " ";
        }
        str += "*";
        for (int j = 0; j < i; j++)
        {
            str += "**";
        }

        arr[i] = str;
        cout << left << str << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        cout.width(n + i);
        cout << left << arr[i] << endl;
    }
    delete[] arr;
    return 0;
}