#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b);
void printArray(int arr[], int size);
void selectionSort(int arr[],int n);

int main()
{
    int arr[10] = { 0 };
    for (int i = 0; i <= 9; i++)
        arr[i] = rand() % 50;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Table before selection sorting:\n");
    printArray(arr, n);

    selectionSort(arr, n);



    printf("Table after selection sorting:\n");
    printArray(arr, n);

    return 0;
}

// function to swap two elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void selectionSort(int arr[], int n)
{
    int counter = 0;
    while (counter < n)
    {
        int i = counter, j = counter, tmp = counter;
        while (j < n)
        {
            if (arr[i] <= arr[j])
            {
                j++;
            }
            else
            {
                tmp = j;
                i=j;
                j++;
            }
        }
        swap(&arr[counter], &arr[tmp]);
        counter++;
    }
}
