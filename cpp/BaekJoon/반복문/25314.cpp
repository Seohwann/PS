#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int div = (int)(a / 4);
    for (int i = 0; i < div; i++)
    {
        cout << "long ";
    }
    cout << "int";

    return 0;
}