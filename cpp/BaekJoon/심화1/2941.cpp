#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string str;
    cin >> str;
    while (true)
    {
        if (str.find("c=") != string::npos)
        {
            str.replace(str.find("c="), 2, "1");
        }
        else if (str.find("c-") != string::npos)
        {
            str.replace(str.find("c-"), 2, "1");
        }
        else if (str.find("dz=") != string::npos)
        {
            str.replace(str.find("dz="), 3, "1");
        }
        else if (str.find("d-") != string::npos)
        {
            str.replace(str.find("d-"), 2, "1");
        }
        else if (str.find("lj") != string::npos)
        {
            str.replace(str.find("lj"), 2, "1");
        }
        else if (str.find("nj") != string::npos)
        {
            str.replace(str.find("nj"), 2, "1");
        }
        else if (str.find("s=") != string::npos)
        {
            str.replace(str.find("s="), 2, "1");
        }
        else if (str.find("z=") != string::npos)
        {
            str.replace(str.find("z="), 2, "1");
        }
        else
        {
            break;
        }
    }
    cout << str.size() << endl;

    return 0;
}