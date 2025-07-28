#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int temp;
    string str;
    string res;
    for (int i = 0; i < n; i++)
    {
        res = "";
        cin >> temp;
        cin >> str;
        for (int j = 0; j < temp * str.size(); j++)
        {
            res += str[(int)(j / temp)];
        }
        cout << res << endl;
    }

    return 0;
}