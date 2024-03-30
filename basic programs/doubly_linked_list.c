// #include <stdlib.h>
// #include <stdio.h>
// struct double_node
// {
//     int info;
//     struct double_node *prev;
//     struct double_node *next;
// };
// typedef struct double_node node;
// node *p, *q, *start = NULL;
// // creating multiple node
// void multiple_node(int cap)
// {
//     int i;
//     for (i = 0; i < cap; i++)
//     {
//         p = (node *)malloc(sizeof(node));
//         p->next = NULL;
//         p->prev = NULL;
//         scanf("%d", &p->info);
//         if (start == NULL)
//         {
//             start = p;
//             q = p;
//         }
//         else
//         {
//             q->next = p;
//             p->prev = q;
//             q = p;
//         }
//     }
// }
// // traversing
// void traversing()
// {
//     node *temp;
//     temp = start;
//     while (temp != NULL)
//     {
//         printf("%d\t", temp->info);
//         temp = temp->next;
//     }
// }
// // insertion

// void insert_start()
// {
//     p = (node *)malloc(sizeof(node));
//     p->next = NULL;
//     p->prev = NULL;
//     scanf("%d", &p->info);
//     node *temp;
//     temp = start;
//     start = p;
//     p->next = temp;
//     temp->prev = p;
// }

// void insert_end()
// {
//     p = (node *)malloc(sizeof(node));
//     p->next = NULL;
//     p->prev = NULL;
//     scanf("%d", &p->info);
//     node *temp;
//     temp = start;
//     while (temp != NULL)
//         temp = temp->next;
//     p->prev = temp;
//     temp->next = p;
// }

// void insert_mid(int position)
// {
//     p = (node *)malloc(sizeof(node));
//     p->next = NULL;
//     p->prev = NULL;
//     scanf("%d", &p->info);
//     node *temp;
//     int i = 1;
//     while (i == position)
//         temp = temp->next;
//     p->prev = temp;
//     p->next = temp->next;
//     temp->next = p;
// }

// int main(int argc, char const *argv[])
// {
//     multiple_node(5);
//     traversing();
//     // printf("Insertion at start\n");
//     // insert_start();
//     // traversing();
//     printf("Insertion at end\n");
//     insert_end();
//     traversing();
//     printf("Insertion at mid\n");
//     insert_mid(2);
//     traversing();
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
struct node{
    int item;
    struct node *prev;
    struct node *next;
}*start = NULL,*p,*q;
struct node *create_node(){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->next = NULL;
    temp->prev = NULL;
    return temp;    
}
void mult_node(int n){
    for(int i= 0; i<n;i++){
        p = create_node();
        printf("Enter value %d:",i+1);
        scanf("%d",&p->item);
        if(start == NULL){
            start = p;
            q = p;
        }
        else{
            q->next = p;
            p->prev = q;
            q = p;
        }
    }
}
// inserting an element 
void insert_beg(){
    p = create_node();
    printf("Enter the data to be inserted at beginning:");
    scanf("%d",&p->item);
    p->next = start;
    start->prev = p;
    start = p;
}
void insert_end(){
    p = create_node();
    printf("Enter the data to be inserted at end:");
    scanf("%d",&p->item);
    struct node *t = start;
    while(t->next != NULL)    
        t = t->next;
    t->next = p;
    p->prev = t;
    // free(t);
}
void insert_mid(int n){
    p = create_node();
    printf("Enter the data to be inserted :");
    scanf("%d",&p->item);
    int count = 1;
    struct node *t = start,*nt;
    while(count != n){
        t = t->next;
        count++;
    }
    nt = t->next;
    p->next = nt;
    nt->prev = p;
    t->next = p;
}
 // traversing the node 
void traverse(){
     struct node *t;
    printf("Items in the list are:\n");
    if(start == NULL)
       printf("list is empty");
    else{
        t = start;
        while (t != NULL)
        {
            printf("%d\n",t->item);
            t = t->next;
        }
    }
}

int main(int argc, char const *argv[])
{
     int num,i;
    printf("Enter no. of node in list: ");
    scanf("%d",&num);
    mult_node(num);
    traverse();
    insert_beg();
    traverse();
    insert_mid(3);
    traverse();
    insert_end();
    traverse();
    return 0;
}
