#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string str;
    cin >> str;
    int index;
    cin >> index;
    cout << str[index - 1];
    return 0;
}