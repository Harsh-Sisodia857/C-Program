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
    p->next = start;
    printf("Enter the value:");
    scanf("%d",&p->item);
    if(start == NULL){
        start = p;
        q = p;
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
        do{
            printf("%d\n",traverse->item);
            traverse = traverse->next;
        }while(traverse != start);
    }
}
void insert_beg(){
    struct node *q,*last= start,*insert = create_node();
    printf("Enter the value inserted at begining : ");
    scanf("%d",&insert->item);
    // Getting the address of last node
    do{     
            q = last; // keep the value previous to the last pointer
            last = last->next;
        }while(last != start);
    if(start == NULL){
        start = insert;
        insert->next = start;
        // free(insert);
    }
    else{
    insert->next = start;
    start = insert;
    q->next = start;
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
    struct node *t;
    printf("Enter the value inserted at end : ");
    scanf("%d",&insert->item);
    q->next = insert;
    insert->next = start;
}
int main(int argc, char const *argv[])
{
    mult_node(5);
    traversing();
    insert_beg();
    traversing();
    insert_mid(3);
    traversing();
    insert_end();
    traversing();
    return 0;
}
