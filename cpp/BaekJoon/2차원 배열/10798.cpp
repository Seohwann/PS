#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    int arr[5][15];
    string str;
    for (int i = 0; i < 5; i++)
    {
        cin >> str;
        for (int j = 0; j < str.size(); j++)
        {
            arr[i][j] = str[j] - '0';
        }
        for (int j = str.size(); j < 15; j++)
        {
            arr[i][j] = -1;
        }
    }

    for (int j = 0; j < 15; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (arr[i][j] != -1)
            {
                cout << (char)(arr[i][j] + '0');
            }
        }
    }

    return 0;
}