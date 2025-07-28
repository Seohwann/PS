#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num, max, min;
    int *arr = new int[n];
    max = -1000001;
    min = 1000001;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[i] = num;
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }

    cout << min << " " << max;
    delete[] arr;
    return 0;
}