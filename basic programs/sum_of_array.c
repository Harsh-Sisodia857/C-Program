#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[100],max_arr[100],i,n,count=0;
    printf("Enter array size:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i] > 0){
            count += arr[i];
            
        }
        else{
            count = 0;
        }
    }

    return 0;
}
