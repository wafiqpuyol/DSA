#include <stdio.h>

int peakElOfArr(int arr[], int size)
{
    int s = 0, e = size - 1, mid = (e + s) / 2;

    while (s <= e)
    {
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {0, 1, 2, 3, 2, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = peakElOfArr(arr, size);

    if (result != -1)
    {
        printf("Found element is in index no. %d ", result);
    }
    else
    {
        printf("Element not found");
    }
}