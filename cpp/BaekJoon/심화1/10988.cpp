#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int flag = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if (i >= (int)(str.size() / 2))
            break;
        if (str[i] != str[str.size() - 1 - i])
        {
            cout << 0;
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << 1;
    }
    return 0;
}