#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int temp, max;
    max = -1;
    int *arr = new int[n];
    float *arr2 = new float[n];
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[i] = temp;
        // cout << arr[i];

        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    float res;
    for (int i = 0; i < n; i++)
    {
        res = ((float)arr[i] / (float)max) * 100.0;
        arr2[i] = res;
        // cout << arr2[i] << endl;
    }
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr2[i];
    }
    cout << sum / (float)n;

    delete[] arr;
    delete[] arr2;
    return 0;
}