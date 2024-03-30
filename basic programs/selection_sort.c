#include<stdio.h>
int min(int A[],int k,int n);
int min(int A[],int k,int n){
    int MIN,LOC;
    MIN = A[k];
    LOC = k;
        for(int i = k+1;i<n;i++){
            if (MIN > A[i]){
                MIN = A[i];
                LOC = i;
            }
        }
    return LOC;
}
int main(int argc, char const *argv[])
{
    int A[10],i,LOC,num,temp;
    printf("Enter the number of item in array(max 10):");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<num-1;i++){
        LOC = min(A,i,num);
        temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;
    }

    return 0;
}
