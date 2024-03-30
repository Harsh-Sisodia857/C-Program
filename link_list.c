#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node Node;
Node *p, *q, *start = NULL;

// create single node 
// Node* createNode()
// {
//     p = (Node *)malloc(sizeof(Node));
//     p->next = NULL;
//     return p;
// }
void multipleNode(int n)
{
    int i;
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        p = (Node *)malloc(sizeof(Node));
        scanf("%d", &p->info);
        p->next = NULL;
        if (start == NULL)
        {
            start = p;
            q = p;
        }
        else
        {
            q->next = p; // linking the previous node with p
            q = p;       // storing current value of p
        }
    }
}
void traversing()
{   Node *t = start;
    while (t != NULL)
    {
        printf("%d\n",t->info);
        t = t->next;
    }
}
// insertion of node

void insert_start()
{
    q = (Node *)malloc(sizeof(Node));
    q->next = NULL;
    scanf("%d", &q->info);
    Node *temp;
    temp = start;
    start = q;
    q->next = temp;
}

void insert_end()
{
    q = (Node *)malloc(sizeof(Node));
    q->next = NULL;
    scanf("%d", &q->info);
    Node *temp;
    temp = start;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = q;
}

void in_between(int position)
{
    q = (Node *)malloc(sizeof(Node));
    q->next = NULL;
    scanf("%d", &q->info);
    Node *temp;
    temp = start;
    for (int i = 1; i <= position; i++)
    {
        temp = temp->next;
    }
    p = temp->next;
    temp->next = q;
    q->next = p;
}

// deletion at end

void delete_start()
{
    Node *temp;
    temp = start;
    start = start->next;
    free(temp);
}

void delete_end()
{
    Node *temp;
    temp = start;
    while (temp->next != NULL)
    {
        p = temp;
        temp = temp->next;
    }
    temp->next = NULL;
    free(temp);
}

void delete_mid(int position)
{
    Node *temp;
    int i = 1;
    while (i == position)
    {
        p = temp;
        temp = temp->next;
    }
    p->next = temp->next;
    free(temp);
}
int main(int argc, char const *argv[])
{    
    multipleNode(4);
    traversing();
    insert_start();
    traversing();
    insert_end();
    traversing();
    in_between(4);
    traversing();
    delete_start();
    traversing();
    delete_end();
    traversing();
    delete_mid(2);
    traversing();
    return 0;
}
