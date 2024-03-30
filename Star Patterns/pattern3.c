// ****
// *  *
// *  *
// *  *
// ****

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,row,col;
    printf("Enter no. of row and column:\n");
    scanf("%d%d",&row,&col);
    printf("%d %d\n",row,col);
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(i==1 || i==row || j ==1 || j ==col)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
