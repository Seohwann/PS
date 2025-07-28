#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 0;
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0 && str[i] == ' ')
            continue;
        if (i == str.size() - 1 && str[i] == ' ')
            continue;
        if (str[i] == ' ')
            count++;
    }

    if (str.find_first_not_of(' ') == string::npos) // 문자열 전체가 공백인지 확인하는 함수
        cout << 0;
    else
        cout << count + 1;

    return 0;
}
