#include <stdio.h>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int a[], int l, int r)
{
    int pivot = a[r];
    int i = l - 1; // i signifies the correct position of pivot minus(-) 1
    for (int j = l; j < r; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a, i, j);
        }
    }
    swap(a, i + 1, r);
    return i + 1;
}

void quickSort(int A[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(A, l, r);
        quickSort(A, l, pi - 1);
        quickSort(A, pi + 1, r);
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {4, 23, 1, 41, 15};
    quickSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
        printf("%d\t", arr[i]);
    return 0;
}
