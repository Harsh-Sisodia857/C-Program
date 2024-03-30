#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{   
    char temp[10],humidity[10];
    printf("Enter temperature (Warm or Cold):");
    scanf("%s",&temp);
    printf("Enter humidity(Dry or Humid):");
    scanf("%s",&humidity);
    if(!strcmp(temp,"Warm")){
        if (!strcmp(humidity,"Dry"))
               printf("Play Basketball");
        if (!strcmp(humidity,"Humid"))
               printf("Play Tennis");
    }
    if(!strcmp(temp,"Cold")){
        if (!strcmp(humidity,"Dry"))
               printf("Play Cricket");
        if (!strcmp(humidity,"Humid"))
               printf("Swim");
    }
   return 0;
}
