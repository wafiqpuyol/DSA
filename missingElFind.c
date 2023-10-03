#include <stdio.h>

int findMissingElement(int arr[], int size)
{
    int s = 0, e = size - 1, mid = (e + s) / 2;

    while (s <= e)
    {
        if (arr[mid] != mid + 1 && arr[mid - 1] == mid)
        {
            return mid + 1;
        }
        if (arr[mid] == mid + 1)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = findMissingElement(arr, size);

    if (result != -1)
    {
        printf("%d is the missing element", result);
    }
    else
    {
        printf("Missing element isn't found");
    }
}