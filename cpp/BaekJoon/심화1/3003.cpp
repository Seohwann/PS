#include <iostream>

using namespace std;

int main()
{

    int k = 1, q = 1, l = 2, b = 2, n = 2, p = 8;
    int *arr = new int[6];
    int temp;
    for (int i = 0; i < 6; i++)
    {
        cin >> temp;
        arr[i] = temp;
    }
    cout << k - arr[0] << " ";
    cout << q - arr[1] << " ";
    cout << l - arr[2] << " ";
    cout << b - arr[3] << " ";
    cout << n - arr[4] << " ";
    cout << p - arr[5];
    return 0;
}