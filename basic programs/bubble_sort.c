#include <stdio.h>
#include<conio.h>
void bubble_sort(int A[], int n);
void bubble_sort(int A[], int n)
{
    // int round, j, temp;
    // for (round = 1; round <= n - 1; round++)
    // {
    //     for (j = 0; j <= n - 1 - round; j++)
    //     {
    //         if (A[j] > A[j + 1])
    //         {
    //             temp = A[j];
    //             A[j] = A[j + 1];
    //             A[j + 1] = temp;
    //         }
    //     }
    // }

    int round,j,temp;
    for(round = 0 ; round < n - 1; round++){
        for(j = 0 ; j< n-1-round; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp; 
            }
        }
    }
    
}
int main(int argc, char const *argv[])
{
    // int arr[5];
    // int i;
    // printf("Enter the items in array (max 5)\n");
    // for(i=0;i<5;i++){
    //     scanf("%d",&arr[i]);
    // }
    // bubble_sort(arr, 5);
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }

    int arr[5] = {3,42,12,52,121};
    bubble_sort(arr,5);
    for(int i = 0; i<5; i++)
        printf("%d\t",arr[i]);
    return 0;
}
