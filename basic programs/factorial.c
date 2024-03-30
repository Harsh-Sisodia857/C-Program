#include<stdio.h>
int fact(int);
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number of which you want to find factorial:");
    scanf("%d",&num);
    int result = fact(num);
    printf("%d",result);
    return 0;
}
int fact(int f){
    if(f == 1){
        return 1;
    }
        else{
            return (f * fact(f-1));
        }
}
