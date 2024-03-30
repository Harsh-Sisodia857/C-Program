#include  <stdio.h>

//   1
//   1 2
//   1    3
//   1       4
//   1 2  3  4  5

int main()
{
  int i,j;
  for(i=1;i<=5;i++){
      for(j=1;j<=5;j++){
          if(i<=4){
              if(j==i || j==1)
                   printf("%d\t",j);
              else
              {
                  printf("\t");
              }
              
}
      }
      if(i==5){
              printf("%d\t%d\t%d\t%d\t%d",1,2,3,4,5);
          }
      printf("\n");
  }
  return 0;
}