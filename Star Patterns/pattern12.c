//      *
//     * *
//    *   *
//   *     *
//  *       *
// *         *
// *         *
//  *       *
//   *     *
//    *   *
//     * *
//      *
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,m=0;
    for(i=1;i<=12;i++){
        if(i != 7)
             i<=6?m++:m--;
        for(j=1;j<=11;j++){
            if(j==7-m || j==5+m)
                printf("*");
            else
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}
