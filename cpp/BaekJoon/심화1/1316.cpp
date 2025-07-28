#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    string str;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        int *arr = new int[26]();
        for (int j = 0; j < 26; j++)
        {
            arr[j] = 0;
        }
        for (int j = 0; j < str.size(); j++)
        {
            if (j == 0)
            {
                arr[str[j] - 'a']++;
                continue;
            }
            else
            {
                if (str[j] != str[j - 1] && arr[str[j] - 'a'] > 0)
                {
                    count++;
                    break;
                }
                else
                {
                    arr[str[j] - 'a']++;
                    continue;
                }
            }
        }

        delete[] arr;
    }

    cout << n - count << endl;
    return 0;
}