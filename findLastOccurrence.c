#include <stdio.h>

int findLastOccurrence(int arr[], int size, int t)
{
    int s = 0, e = size - 1, mid = (e + s) / 2, ans = -1;

    while (s <= e)
    {
        if (arr[mid] == t)
        {
            ans = mid;
            s = mid + 1;
        }
        if (arr[mid] > t)
        {
            e = mid - 1;
        }
        if (arr[mid] < t)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 6, 6, 6, 7, 9, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = findLastOccurrence(arr, size, 6);

    if (result != -1)
    {
        printf("%d is the last occurrence", result);
    }
    else
    {
        printf("last occurrence isn't found");
    }
}