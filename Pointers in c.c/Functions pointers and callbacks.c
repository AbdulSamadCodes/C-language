#include <stdio.h>
#include <string.h>

int compare(char *order)
{
    if (strcmp(order, "Desc") == 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

void bubbleSort(int *arr, int n, char *order, int (*callback_compare)(char *order))
{

    int temp;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (callback_compare(order) == 1)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else
            {
                if (arr[j] < arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

int main()
{

    int arr[] = {4, 6, 2, 20, 98};
    int length = sizeof(arr) / sizeof(arr[0]);
    char order[] = "Asc";

    int (*compare_ptr)(char *) = &compare;
    bubbleSort(arr, length, order, compare_ptr);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}