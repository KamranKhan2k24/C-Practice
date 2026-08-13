#include <stdio.h>

int linearSearch(int *arr, int len, int element);

int main()
{
    int arr[] = {10, 15, 7, 2, 8, 5, 35, 68, 39, 40};
    int len = sizeof(arr) / sizeof(arr[0]);
    int data;

    printf("Enter the number to be searched: ");
    scanf("%d", &data);

    int index = linearSearch(arr, len, data);

    if (index == -1)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Element found at index %d.\n", index);
    }

    return 0;
}

int linearSearch(int *arr, int len, int element)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }

    return -1;
}