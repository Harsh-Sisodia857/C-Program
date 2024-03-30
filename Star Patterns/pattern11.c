//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  *******
//   *****
//    ***
//     *
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,m=0;
    for(i=1;i<=10;i++){
      if(i != 6)
        i<6?m++:m--;
        for(j=1;j<=9;j++){
            if(j>=6-m && j<=4+m)
               printf("*");
            else
               printf(" ");
        }
        printf("\n");
    }
    return 0;
}
