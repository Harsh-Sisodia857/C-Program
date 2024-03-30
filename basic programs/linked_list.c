// #include<stdio.h>
// #include<stdlib.h>
// void traverse();
// struct node* create_node();
// struct node* multiple_node(int num);
// void insert_beg();
// void insert_mid(int n);
// struct node
// {
//     int item;
//     struct node * next;   
// };
// // creating single node 
// struct node* create_node(){
//     struct node *temp;
//     temp = (struct node *)malloc(sizeof(struct node));
//     temp->next = NULL;
//     return temp;
// }
// struct node *start = NULL,*p,*q;
// // creating multiple node 
// struct node* multiple_node(int num){
//      printf("Please enter the items:\n");
//     for(int i = 0;i<num;i++){
//         p = malloc(sizeof(struct node));
//         scanf("%d",&p->item);
//         p->next = NULL;
//         if(start == NULL){
//             start = p;
//             q = p;
//         }
//         else{
//           q->next = p;
//           q = p;
//         }
//     }
//     return p;
// }

// // traversing the node 
// void traverse(){
//      struct node *t;
//     printf("Items in the list are:\n");
//     if(start == NULL)
//        printf("list is empty");
//     else{
//         t = start;
//         while (t->next != NULL)
//         {
//             printf("%d\n",t->item);
//             t = t->next;
//         }
//     printf("%d",t->item);
//     }
// }

// // insertion in node 
// void insert_beg(){
// printf("\nitem to be inserted in starting: \n");
// struct node *insert;
// if(start == NULL)
//     {
//       insert = create_node();
//       printf("Enter the item: ");
//       scanf("%d",&insert->item);
//       start = insert;
// //     free(insert);
//     }
// else
// {    
//       insert = create_node();
//       printf("Enter the item: ");
//       scanf("%d",&insert->item);
//       insert->next = start;
//       start = insert;
// //       free(insert);
// }      
// }
// void insert_end(){
// printf("\nitem to be inserted in ending: \n");
// struct node *insert,*t;
// if(start == NULL)
//     {
//       insert = create_node();
//       printf("Enter the item: ");
//       scanf("%d",&insert->item);
//       start = insert;
// //       free(insert);
//     }
// else
// {    
//      insert = create_node();
//       t = start;
//       printf("Enter the item: ");
//       scanf("%d",&insert->item);
//       while(t->next != NULL)
//           t = t->next;
//       t->next = insert;
// //       free(insert);
// }      
// }

// void insert_mid(int n){
// struct node *insert,*t,*q;
// if(start == NULL)
//     {
//       insert = create_node();
//       printf("Enter the item: ");
//       scanf("%d",&insert->item);
//       start = insert;
// //       free(insert);
//     }
// else
// {    
//      insert = create_node();
//       t = start;
//       while(t->item != n)
//           t = t->next;
//     q = t;
//     t = t->next;
//       printf("Enter the item: ");
//       scanf("%d",&insert->item);
//      insert->next = t;
//       q->next= insert;
// //       free(insert);
// }       
// }

// int main(int argc, char const *argv[])
// {
//     int num,i;
//     printf("Enter no. of node in list: ");
//     scanf("%d",&num);
//     multiple_node(num);
//     traverse();
//     // insert_beg();
//     // traverse();
//     // insert_end();
//     // traverse();
//     // printf("\nEnter the number after which you want to insert a new node: ");
//     // scanf("%d",&i);
//     // insert_mid(i);
//     // traverse();
//  return 0;   
// }

#include<stdio.h>
#include<stdlib.h>
struct node{
    int item;
    struct node *next;
};
struct node *start = NULL,*p,*q;
struct node* create_node(){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->next = NULL;
    return temp;
}
void mult_node(int n){
    for(int i=0;i<n;i++){
    p = (struct node*)malloc(sizeof(struct node));
    p->next = NULL;
    printf("Enter the value:");
    scanf("%d",&p->item);
    if(start == NULL){
        start = p;
        q = p; // keep the link to previous node
    }
    else{
        q->next = p;
        q = p;
    }
    }
}
void traversing(){
    struct node *traverse = start;
    if(start == NULL){
        printf("List is Empty");
        return;
    }
    else{
        while(traverse != NULL){
            printf("%d\n",traverse->item);
            traverse = traverse->next;
        }
    }
}
void insert_beg(){
    struct node *insert = create_node();
    printf("Enter the value inserted at begining : ");
    scanf("%d",&insert->item);
    insert->next = NULL;
    if(start == NULL){
        start = insert;
        // free(insert);
    }
    else{
    insert->next = start;
    start = insert;
    // free(insert);
    }
}
void insert_mid(int mid){
    struct node *insert = create_node();
    struct node *q;
    printf("Enter the value: ");
    scanf("%d",&insert->item);
    int count = 1;
    q = start;
    while(count != mid){
        q = q->next;
        count++;
    }
    insert->next = q->next;
    q->next = insert;
    // free(insert);
    // free(q);
}
void insert_end(){
    struct node *insert = create_node();
    printf("Enter the value inserted at end : ");
    scanf("%d",&insert->item);
    q = start;
    while(q->next != NULL){
        q = q->next;
    }
    q->next = insert;
}
int main(int argc, char const *argv[])
{
    mult_node(5);
    traversing();
    // insert_beg();
    // traversing();
    // insert_mid(3);
    // traversing();
    insert_end();
    traversing();
    return 0;
}
