// 1 . without using third variable
// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     printf("Enter a:");
//     scanf("%d",&a);
//     printf("Enter b:");
//     scanf("%d",&b);
//     a = a + b;
//     a = a - b;
//     b = a - b;
//     printf("Swapped number are a is %d and b is %d",a,b);
// }

// 2 . with using third variable
// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     int c;
//     printf("Enter a:");
//     scanf("%d",&a);
//     printf("Enter b:");
//     scanf("%d",&b);
//     c = a;
//     a = b;
//     b = c;
//     printf("Swapped number are a is %d and b is %d",a,b);
// }

// 3 . Swapping by using pointer 

// #include<stdio.h>
// void swapping(int *p,int *q);
// int main(int argc, char const *argv[])
// {
//     int a,b;
//     printf("Enter a:");
//     scanf("%d",&a);
//     printf("Enter b:");
//     scanf("%d",&b);
//     swapping(&a,&b);
//     printf("Value of a is %d and Value of b is %d",a,b);
//     return 0;
// }
// void swapping(int *p,int *q){
//     int c;
//     c = *p;
//     *p = *q;
//     *q = c;
// }

