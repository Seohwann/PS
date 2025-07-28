#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 0;
    string str;
    while (getline(cin, str))
    {
        cout << str << endl;
    }

    return 0;
}
