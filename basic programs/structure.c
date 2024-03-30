#include<stdio.h>
#include <stdlib.h>
typedef struct student
{
    char name[20];
    int id;
    int age;
    int class;
    char sec;
}std;
int main(int argc, char const *argv[])
{
    int n,i;
    printf("Enter no. of student in a class:");
    scanf("%d",&n);
    std *ptr;
    ptr = (std*)calloc(n,sizeof(std));
    for(i = 0;i<n;i++){
        printf("Enter student %d details:\n",i+1);
        printf("Enter student name: ");
        gets((ptr + i) -> name);
         printf("Enter student id: ");
        scanf("%d",(ptr + i) -> id);
         printf("Enter student age: ");
        scanf("%d",(ptr + i) -> age);
         printf("Enter student class: ");
        scanf("%d",(ptr + i) -> class);
         printf("Enter student section: ");
        scanf("%c",(ptr + i) -> sec);
    }
    for(i = 0;i<n;i++){
        printf("student %d details:\n",i+1);
        puts((ptr + i) -> name);
        printf("%d \n",(ptr + i) -> id);
        printf("%d \n",(ptr + i) -> age);
        printf("%d \n",(ptr + i) -> class);
        printf("%c \n",(ptr + i) -> sec);
    }
    return 0;
}


//  storing student data 

// #include<stdio.h>
// #include<string.h>
// typedef struct student
// {
//     char name[20];
//     int id;
//     int age;
//     int class;
//     char sec;
// }std;
// int main(int argc, char const *argv[])
// {
//     std s1,s2;
//     strcpy(s1.name,"Harsh");
//     s1.id = 21;
//     s1.age = 18;
//     s1.class = 10;
//     s1.sec = 'A';
//     strcpy(s2.name,"Yash");
//     s2.id = 22;
//     s2.age = 15;
//     s2.class = 7;
//     s2.sec = 'A';
//     printf("Student %d details \n",1);
//     printf("%s \n",s1.name);
//     printf("%d \n",s1.id);
//     printf("%d \n",s1.age);
//     printf("%d \n",s1.class);
//     printf("%c \n",s1.sec);
//     printf("Student %d details \n",2);
//     printf("%s \n",s2.name);
//     printf("%d \n",s2.id);
//     printf("%d \n",s2.age);
//     printf("%d \n",s2.class);
//     printf("%c \n",s2.sec);
//     return 0;

// }