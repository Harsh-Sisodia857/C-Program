#include <stdio.h>
#include<stdlib.h>
int i,val;
struct tree{
    int key;
    struct tree * left;
    struct tree * right;
}*root,*p,*q,*r;

void create(int n){
    for(i=0;i<n;i++){
        printf("Enter the Value to Insert : " );
        scanf("%d",&val);
        insert(val);
    }
}

void insert(int data){
    p = (struct tree*)malloc(sizeof(struct tree));
    p->left = NULL;
    p->right = NULL;
    p->key = data;
   
    if(root == NULL){
        root = p;
      //  q = p;
    }
   
    else{
        q = root;
        while(q!=NULL){
            r=q;
            if(q->key > p->key){
                q = q->left;
            }
            else{
                q = q->right;
            }
        }
        if(r->key>p->key){
            r->left = p;
        }
        else{
            r->right = p;
        }
    }
}

void IO(struct tree* p){
    if(p == NULL){
        return;
    }
    else{
    IO(p->left);
    printf(" %d ", p->key);
    IO(p->right);
    }
}

void PO(struct tree* p){
    if(p == NULL){
        return;
    }
    else{
    PO(p->left);
    PO(p->right);
    printf(" %d ", p->key);
    }
}

void PreO(struct tree* p){
    if(p == NULL){
        return;
    }
    else{
    printf(" %d ", p->key);
    PreO(p->left);
    PreO(p->right);
    }
}

int main()
{
    root = NULL;
    int n,choice=9;
    printf("Program for Implementation of BST : \n");
    
    while(choice){
        printf("\n\nSelect from choice of Operations :\n");
        printf("1. Insert New Node\n");
        printf("2. Print Pre Order\n");
        printf("3. Print Post Order\n");
        printf("4. Print In Order\n");
        printf("5. EXIT the Program.\n");
        printf("Enter your Choice : ");
        scanf("%d",&choice);
        printf("\n");
        switch (choice){
            case 1:
                printf("Enter number of nodes : ");
                scanf("%d",&n);
                create(n);
                break;
            case 2:
                printf(" PRE ORDER --> ");
                PreO(root);
                break;
            case 3:
                printf("\n POST ORDER --> ");
                PO(root);
                break;
            case 4:
                printf("\n IN ORDER --> ");
                IO(root);
                break;
            case 5:
                choice =0;
                break;
            default:
                printf("ERROR!! Enter the Correct Choice again .\n\n");
        }
    }
    printf("\n");
    return 0;
}