#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int capacity;
    int top;
    int *array;
};
struct stack *create_stack(int cap)
{
    struct stack *p;
    int item;
    p = (struct stack *)malloc(sizeof(struct stack));
    p->capacity = cap;
    p->top = -1;
    p->array = (int *)malloc(sizeof(int) * cap);
    for (int i = 0; i < cap; i++)
    {
        scanf("%d", &item);
        p->top++;
        p->array[p->top] = item;
    }
    return p;
};
int isFull(struct stack *s)
{
    if (s->top == s->capacity - 1)
        return 1;
    return 0;
}
int isEmpty(struct stack *s)
{
    if (s->top == -1)
        return 1;
    return 0;
}
void push(struct stack *s, int item)
{
    if (!isFull(s))
    {
        s->top += 1;
        s->array[s->top] = item;
    }
}
void pop(struct stack *s)
{
    if (!isEmpty(s))
    {
        printf("\nDeleted item is %d", s->array[s->top]);
        s->top = s->top - 1;
    }
}
int main(int argc, char const *argv[])
{
    struct stack *p;
    int item;
    p = create_stack(5);
    pop(p);
    printf("\nEnter the item to be inserted:");
    scanf("%d", &item);
    push(p, item);
    pop(p);
    return 0;
}
