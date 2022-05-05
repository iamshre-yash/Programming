#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i < index; i++)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *y = *x;
    *x = temp;
}

int LinearSearch(struct Array *arr, int key)
{
    for (int i = 0; i < arr->size; i++)
    {
        if (key == arr->A[i])
            // Transposition improvement in LinearSearch
            // swap(&arr->A[i],&arr->[i-1]);
            return i;
    }
    return -1;
}

int BinarySearch(struct Array arr, int key)
{
    int l = 0, h = arr.length, mid;
    // RBinarySearch
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key <= arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
}

int RBinarySearch(int A[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
            return mid;
        else if (key < A[mid])
            return RBinarySearch(A, l, mid - 1, key);
        return RBinarySearch(A, mid + 1, h, key);
    }
    return -1;
}

int main(void)
{
    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};

    // Append(&arr,10);
    // Insert(&arr,2,10);
    // printf("\n%d\n", Delete(&arr, 2));
    // printf("\n%d\n", LinearSearch(&arr, 2));
    // printf("\n%d\n", BinarySearch(arr, 4));
    printf("\n%d\n", RBinarySearch(arr.A, 0, arr.length, 4));
    Display(arr);
}