#include <iostream>

using namespace std;

int main()
{
    int a, num1, num2;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> num1;
        cin >> num2;
        cout << num1 + num2 << endl;
    }
    return 0;
}