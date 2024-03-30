#include<stdio.h>
void insertion_sort(int A[],int n){
    int i,j,current;
    for(i=1; i<n;i++){
        current = A[i];
        j = i-1;
        while (A[j] > current && j>=0)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = current;
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {3,41,23,53,51,12};
    insertion_sort(arr,6);
    for(int i=0; i<6; i++){
        printf("%d\t",arr[i]);
    }  
    return 0;
}
