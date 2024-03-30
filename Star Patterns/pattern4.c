//     *
//    ***
//   *****
//  *******
// *********
// row = 5 and col = 9

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,row,col;
    printf("Enter no. of rows and column:\n");
    scanf("%d%d",&row,&col);
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j>=(row+1)-i && j<=(col-5)+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
