#include<stdio.h>
#include<stdlib.h>
void enqueue(int);
void dequeue();
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
void enqueue(int x){
    struct node *temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = x;
    temp->next = NULL;
    if(front == NULL && rear == NULL){
    front = temp;
    rear = temp;
    return;
    }
    rear->next = temp;
    rear = temp;
}
void dequeue(){
    if(front == NULL){
        printf("Queue is Empty");
        return;
    }
    struct node *temp = front;
    printf("Deleted value is %d",temp->data);
    front = front->next;
    free(temp);
}
void main(){
    while(1){
      int choice,n;
  printf("\n1)Instering an element\n2)Deleting an element\n3)exit");
  printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
          case 1 : 
              printf("Enter a value:\n");
              scanf("%d",&n);
              enqueue(n);
              break;
          case 2 :
              dequeue();
              break;
          case 3 : 
              exit(0);
      }
  }
}