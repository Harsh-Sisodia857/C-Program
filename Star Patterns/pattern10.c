//     1
//    212
//   32123
//  4321234
// 543212345
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k;
    for(i=1;i<=5;i++){
        k=i;
        for(j=1;j<=9;j++){
            if(j>=6-i && j<=4+i)
               {
                   printf("%d",k);
                   j<=4?k--:k++;
               }
               else
                   printf(" ");
        }
        printf("\n");
    }
    return 0;
}
