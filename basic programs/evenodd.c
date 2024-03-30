#include<stdio.h>
int main()
{
   int check;
   printf("Enter a number : ");
   scanf("%d",&check);
   if(check%2==0){
       printf("Number is Even");
   }
   else{
       printf("Number is Odd");
   }
    return 0;
}