#include <stdio.h>
// int min(int A[],int k,int N);
// int min(int A[],int k,int N){
//    int LOC = k,j;
//    int MIN = A[k];
//    for(j=k+1;j<N;j++){
//        if (MIN > A[j]){
//            MIN = A[j];
//            LOC = j;
//        }
//    }
//    return LOC;
// }
// int main(int argc, char const *argv[])
// {
//     int A[5]={5,6,7,11,1},B[5]={95,2,65,3,7},res[10],i,j,LOC,temp,k=0,count2=0;
//     // sorting array A using selection sort
//     for(i=0;i<5;i++){
//            LOC = min(A,i,5);
//            temp = A[i];
//            A[i] = A[LOC];
//            A[LOC] = temp;
//     }
//     // printing array A
//     for(i=0;i<5;i++)
//          printf("%d\t",A[i]);
//     // sorting array B using selection sort
//     for(i=0;i<5;i++){
//         LOC = min(B,i,5);
//         temp = B[i];
//         B[i] = B[LOC];
//         B[LOC] = temp;
//     }
//     // printing array B
//     printf("\n");
//     for(i=0;i<5;i++)
//          printf("%d\t",B[i]);
//     // merging two sorted array in sorted manner
//     for(i=0;i<5;i++){
//         for(j=count2;j<5;j++){
//             if(A[i] < A[j]){
//              res[k] = A[i];
//              k++;
//              break;
//             }
//             else if (A[i] == A[j]){
//                 res[k] = A[i];
//                 k++;
//                 res[k] = A[j];
//                 k++;
//                 count2++;
//                 break;
//             }
//             else{
//                 res[k] = A[j];
//                 k++;
//                 count2++;
//             }
//         }
//     }
//     for(i=0;i<5;i++){
//       for(j=0;j<k;j++)
//         if(B[i] != res[j]){
//             res[k] = B[i];
//             k++;
//         }
//     }
//     printf("\n");
//     for(i=0;i<k;i++)
//          printf("%d\t",res[i]);
//     return 0;
// }

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1; // temp array 
    int n2 = r - mid;     // temp array
    int a[n1], b[n2];
    int i = 0, j = 0, k = l; // k traverses the main array
    for (i = 0; i < n1; i++)
    {
        a[i] = arr[l+i];
    }
    for (i = 0; i < n2; i++)
    {
        b[i] = arr[mid+1+i];
    }
    i = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {           
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
           arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void merge_sort(int A[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(A, l, mid);
        merge_sort(A, mid + 1, r);
        merge(A, l, mid, r);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 4, 23, 1, 42, 75, 43, 19};
    merge_sort(arr, 0, 7);
    for (int i = 0; i < 8; i++)
        printf("%d\t", arr[i]);
    return 0;
}
