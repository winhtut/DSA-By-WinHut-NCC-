#include <stdio.h>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // outer loop
    {
        int min = i;   //selecting min value

        for (int j = i + 1; j < n; j++) // inner loop
        {

            if (arr[j] < arr[min]) {

                min = j;  // eg: j=2
            }
        }

        swap(arr, min, i);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = { 3, 5, 8, 4, 1, 9, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}
