#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,s=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    for(int i=1;i<=n;i++)
       s = arr[i] + s;
    printf("%d",s);
    return 0;
}
