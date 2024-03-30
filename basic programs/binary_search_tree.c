#include<stdio.h>
#include<stdlib.h>
typedef struct BST{
    int key;
    struct BST *left,*right;
}bst;
bst *root = NULL,*r,*p,*q;
//Creating nodes
void create(int n){
    int i;
    for(i=0;i<n;i++){
        p = (bst*) malloc(sizeof(bst));
        printf("Enter the value %d)",i+1);
        scanf("%d",&p->key);
        p->left = NULL;
        p->right = NULL;
        if(root == NULL){
            root = p;
        }
        else{
            q = root;
            while(q!= NULL){
            r = q;
            if(q->key > p->key)
                q = q->left;
            else
                q = q->right;            
            }
            if(r->key > p->key)
                r->left = p;
            else
                r->right = p;
        }
    }
}
// pre-Order 
void preOrder(bst *root){
    if(root){
        printf("%d ",root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}
// post-Order 
void postOrder(bst *root){
    if(root){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->key);
    }
}
// in-order 
void inOrder(bst *root){
    if(root){
        inOrder(root->left);
        printf("%d ",root->key);
        inOrder(root->right);
    }
}
int main(int argc, char const *argv[])
{   
    int choice,n;
    printf("Binary search tree operations\n");
    while(1){
        printf("\n\nSelect from choice of Operations :\n");
        printf("1. Creating Several Node\n");
        printf("2. Print Pre Order\n");
        printf("3. Print Post Order\n");
        printf("4. Print In Order\n");
        printf("6. EXIT the Program.\n");
        printf("Enter your Choice : ");
        scanf("%d",&choice);
        printf("\n");
        switch (choice){           
            case 1:
                printf("Enter the number of nodes you want to create:\n");
                scanf("%d",&n);
                create(n);
                break;
            case 2:
                printf(" PRE ORDER --> ");
                preOrder(root);
                break;
            case 3:
                printf("\n POST ORDER --> ");
                postOrder(root);
                break;
            case 4:
                printf("\n IN ORDER --> ");
                inOrder(root);
                break;
            case 6:
                choice =0;
                break;
            default:
                printf("ERROR!! Enter the Correct Choice again .\n\n");
        }
    }
    printf("\n");    
    return 0;
}
