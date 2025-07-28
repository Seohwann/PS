#include <iostream>

using namespace std;

int main()
{
    int n = 9;
    // cin >> n;
    int num, max, min;
    int *arr = new int[n];
    max = -1;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[i] = num;
        if (max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }

    cout << max << endl;
    cout << index + 1;
    delete[] arr;
    return 0;
}