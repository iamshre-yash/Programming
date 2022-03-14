#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int key)
{
    selectionSort(arr, n);
    int s = 0, e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {

            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return 0;
}

int main(void)
{
    int n, key;
    cout << "Size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Key: ";
    cin >> key;

    cout << binarySearch(arr, n, key);
}