#include <iostream>

using namespace std;

int main()
{
    int total, a;
    cin >> total;
    cin >> a;
    int sum = 0;
    int price, quantity;
    for (int i = 0; i < a; i++)
    {
        cin >> price >> quantity;
        sum += price * quantity;
    }
    if (total == sum)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}