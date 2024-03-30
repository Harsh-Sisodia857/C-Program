#include <stdio.h>
#include <stdlib.h>
void enqueue(int);
void dequeue();
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL, *rear = NULL;
void enqueue(int n)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = n;
    new->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = new;
        rear->next = front;
    }
    else
    {
        rear->next = new;
        rear = new;
        rear->next = front;
    }
}
void dequeue()
{
    struct node *t = front;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is Empty");
        free(t);
        return;
    }
    else if (front == rear)
    {
        printf("Deleted value is %d",front->data);
        front = rear = NULL;
        free(t);
    }
    else
    {
        printf("Deleted value is %d", front->data);
        front = front->next;
        rear->next = front;
        free(t);
        
    }
}
int main(int argc, char const *argv[])
{
    while (1)
    {
        int choice, n;
        printf("\n1)Instering an element\n2)Deleting an element\n3)exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a value:\n");
            scanf("%d", &n);
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            exit(0);
        default:
            printf("Enter correct choice!!");
        }
    }
    return 0;
}
