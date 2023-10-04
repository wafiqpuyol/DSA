#include <stdio.h>

int findEl(int arr[], int size, int t)
{
    int s = 0, e = size - 1, mid = (e + s) / 2;

    while (s <= e)
    {
        if (arr[mid] == t)
        {
            return mid;
        }
        else if (arr[mid] > t)
        {
            e = mid - 1;
        }
        else if (arr[mid] < t)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {12, 32, 35, 65, 69, 72, 91, 110, 211};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = findEl(arr, size, 72);

    if (result != -1)
    {
        printf("Found element is in index no. %d ", result);
    }
    else
    {
        printf("Element not found");
    }
}