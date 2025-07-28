#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a;
    cin >> a;
    string str = "";
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            str += "*";
        }
        cout << str << "\n";
        str = "";
    }

    return 0;
}