#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int n;
    cout << "Size of Arr: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] :";
        cin >> arr[i];
    }
    int key;
    cout << "Enter Key: ";
    cin >> key;
    cout << arr[linearSearch(arr, n, key)] << " Index at: " << linearSearch(arr, n, key);
}