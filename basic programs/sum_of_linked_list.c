#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *create_node(){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->next = NULL;
    return temp;
}
struct node *start1,*start2,*start3;
struct node *AddTwoNumber(struct node *list1,struct node *list2){
    int num1,num2;
    printf("Enter a number for list 1: ");
    scanf("%d",&num1);
    printf("Enter a number for list 2: ");
    scanf("%d",&num2);
    list1->data = num1;
    list2->data = num2;
    struct node *sum = create_node();
    sum->data = list1->data + list2->data; 
    sum->next = NULL;
    return sum; 
}

int main(int argc, char const *argv[])
{  
    struct node *sum;
   start1 = create_node();
   start2 = create_node();
   start3 = AddTwoNumber(start1,start2);
   printf("Sum of element in linked list 1 and 2 is: %d",start3->data);
    return 0;
}
 