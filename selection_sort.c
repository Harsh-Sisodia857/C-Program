#include<stdio.h>
void selection_sort(int arr[],int n);
void selection_sort(int arr[],int n){
    int i,j,temp;
    for(i = 0; i< n-1; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int A[] = {45,32,12,53,87,69};
    selection_sort(A,6);
    for(int i = 0; i<6; i++)
        printf("%d\t",A[i]);
    return 0;
}
