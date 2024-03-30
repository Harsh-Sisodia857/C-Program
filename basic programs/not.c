#include  <stdio.h>
int main()
{
 int f[4][1],res[4][1],i,j;
    printf("NOT Gate\n");
    printf("enter the inputs in 0 or 1 only:\n");
    for(i=0;i<2;i++){
            scanf("%d",&f[i][j]);
    }
    for(i=0;i<2;i++){
          printf("%d\t",f[i][j];
           res[i][j] = !f[i][j];
            printf("%d\n",res[i][j]);
      }
  return 0;
}