#include<stdio.h>
void TOH(int n,char BEG,char AUX,char END){
    if(n>0){
        TOH(n-1,BEG,END,AUX);
        printf("%c to %c\n",BEG,END);
        TOH(n-1,AUX,BEG,END);
    }
}
int main(int argc, char const *argv[])
{
    int n=3;
    TOH(n,'A','B','C');
    return 0;
}
