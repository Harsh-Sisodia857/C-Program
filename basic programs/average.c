// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num[10],sum = 0;
//     printf("Enter 10 number to take average:");
//     for(int i= 0;i<=9;i++)
//     scanf("%d",num);
//     for(int s = 0;s<=9;s++){
//         sum = sum + num[s];
//     }
//     int average = sum/10;
//     printf("%d",average);
//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    if (n <= 2)
        printf("%d",0);
    else
        printf("%d",n/3);
    return 0;
}