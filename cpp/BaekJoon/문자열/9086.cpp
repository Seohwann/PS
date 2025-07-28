#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    string str;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        cout << str[0] << str[str.size() - 1] << endl;
    }

    return 0;
}