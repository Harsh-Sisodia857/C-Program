#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10],res[10],i,j,r=1,num;
    printf("Enter number of elements:");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0;i<num;i++){
        r =1;
        for(j=0;j<num;j++){
            if( i != j){
                r *= arr[j];
            }
        }
        res[i] = r;
    }
    for(i=0;i<num;i++){
        printf("%d\n",res[i]);
    }
    return 0;
}
