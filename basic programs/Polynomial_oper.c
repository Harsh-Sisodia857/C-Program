#include <stdlib.h>
#include <stdio.h>
struct poly
{
    int coeff;
    int degree;
    struct poly *next;
};
struct poly *head1 = NULL, *head2 = NULL;
void create_poly(int term, struct poly *head)
{
    int coefficient, degree;
    for (int i = 0; i < term; i++)
    {
        struct poly *p = (struct poly *)malloc(sizeof(struct poly));
        struct poly *q;
        printf("Enter the degree of %d term:", i + 1);
        scanf("%d", &degree);
        printf("Enter the coefficient of %d term:", i + 1);
        scanf("%d", &coefficient);
        p->coeff = coefficient;
        p->degree = degree;
        p->next = NULL;
        if (head == NULL)
        {
            head = p;
            q = p;
        }
        else
        {
            q->next = p;
            q = p;
        }
    }
}
void sum_poly(struct node *head1, struct node *head2)
{
    struct poly *ptr1 = head1,*ptr2 = head2,*res = NULL;
    while(ptr1->next != NULL || ptr2->next != NULL){
        res = (struct poly *)malloc(sizeof(struct poly));
        if(ptr1->degree == ptr2->degree){
            res->degree = ptr1->degree;
            res->coeff = ptr2->coeff + ptr1->coeff;
            res->next = NULL;
        }
        if(ptr1->degree > ptr2->degree)
        {
            res->degree = ptr1->degree;
            res->coeff = ptr1->coeff;
            res->next = NULL;
        }
        if(ptr2->degree > ptr1->degree)
        {
            res->degree = ptr2->degree;
            res->coeff = ptr2->coeff;
            res->next = NULL;
        }
    }
    if(ptr1->next == NULL && ptr2->next!= NULL){
        while(ptr2->next != NULL){
            res->degree = ptr2->degree;
            res->coeff = ptr2->coeff;
            ptr2 = ptr2->next;
        }
    }
    else{
        while(ptr1->next != NULL){
            res->degree = ptr1->degree;
            res->coeff = ptr1->coeff;
            ptr1 = ptr1->next;
        }
    }
    while(res->next != NULL){
        printf("(%d^%d) ",res->coeff,res->degree);
        res = res->next;
    }
}
int main(int argc, char const *argv[])
{
    int term1, term2;
    printf("Enter the no. of term in Polynomial 1: ");
    scanf("%d", &term1);
    create_poly(term1, head1);
    printf("Enter the no. of term in Polynomial 2: ");
    scanf("%d", &term2);
    create_poly(term2, head2);
    printf("Sum of the entered polynomial is:");
    sum_poly(head1, head2);
    return 0;
}
