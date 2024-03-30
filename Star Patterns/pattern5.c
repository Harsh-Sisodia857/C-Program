#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,row,col;
    printf("Enter no. of rows and column:\n");
    scanf("%d%d",&row,&col);
    for(i=1;i<=row;i++){
        k =1;
        for(j=1;j<=col;j++){
            
            if(j>=row + 1-i && j<=col-5+i && k){
               printf("*");
                k = 0;
            }
            else{
                printf(" ");
                k = 1;
            }
              
        }
        printf("\n");
    }
    return 0;
}
