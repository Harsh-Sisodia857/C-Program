#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,row,col;
    printf("Enter no. of rows and column:\n");
    scanf("%d%d",&row,&col);
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(j<= col/2 + 2 -i || j>=col/2 + i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}