#include <iostream>
#include <string>
using namespace std;

int main()
{

    int *arr = new int[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (65 <= str[i] && str[i] <= 90)
        {
            arr[str[i] - 65]++;
        }
        else if (97 <= str[i] && str[i] <= 122)
        {
            arr[str[i] - 97]++;
        }
    }
    int max = -1;
    char res;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            res = i;
        }
    }
    bool flag = false;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == max && i != res)
        {
            flag = true;
        }
    }
    if (flag)
        cout << '?';
    else
        cout << (char)(res + 65);
    delete[] arr;
    return 0;
}