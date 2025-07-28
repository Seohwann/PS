#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    int arr[101] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[i] = num;
    }
    int target;
    cin >> target;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            count++;
    }
    cout << count;

    return 0;
}