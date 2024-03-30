// calculating length or reversing the string using pointer

#include<stdio.h>
int len(char *p);
void display(char *p);
void rev(char *p);
int main(int argc, char const *argv[])
{
    char length[10];
    printf("Enter any string:");
    gets(length);
    printf("%d",len(length));
    rev(length);
    display(length);
    return 0;
}
int len(char *p){
    int i;
    for(i=0; *(p + i) !='\0';i++);
    return i;
}
void display(char *p){
    for(int i = 0; *(p + i) != '\0';i++){
        printf("%c",*(p + i));
    }
}
void rev(char *p){
    int t = len(p);
    char c;
    for(int m=0; m = t/2;m++){
        c = *p;
        *p = *(p+t-1-m);
        *(p+t-1-m) = c;
    }
}
