// #include<stdio.h>
// #include<stdlib.h>
// typedef struct polynomial{
//     int pow;
//     int coff;
//     struct polynomial *next;
// }poly;
// poly *p,*q,*start = NULL,*head = NULL,*result=NULL;
// poly* create_poly1(){
//       for(int i=3;i>=0;i--){
//           p = (poly*)malloc(sizeof(poly));
//           p->next = NULL;
//           p->pow = i;
//           printf("Enter the coefficient:");
//           scanf("%d",&p->coff);
//           if(start == NULL){
//               start = p;
//               q = p;
//           } 
//           else{
//               q->next = p;
//               q = p;
//           }
//       }
//       return p;
// }
// poly* create_poly2(){
//       for(int i=3;i>=0;i--){
//           p = (poly*)malloc(sizeof(poly));
//           p->next = NULL;
//           p->pow = i;
//           scanf("%d",&p->coff);
//           if(start == NULL){
//               start = p;
//               q = p;
//           } 
//           else{
//               q->next = p;
//               q = p;
//           }
//       }
//       return p;
// }
// void traversing(poly *trav){
//     poly *t= trav;
//     while(t->next != NULL){
//         printf("%d\t",t->coff);
//         t = t->next;
//     }
//     printf("%d\t",t->coff);
// }
// int main(int argc, char const *argv[])
// {
//     poly *polynomial1 = create_poly1();
//     printf("first polynomial is\n");
//     traversing(polynomial1);
//     poly *polynomial2 = create_poly2();
//     printf("second polynomial is\n");
//     traversing(polynomial2);
//     poly *polynomial3;
//     // Addition of polynomial 
//     for(int i=3;i>=0;i--){
//        p->pow = i;
//        polynomial3 = (poly*)malloc(sizeof(poly));
//        polynomial3->coff = polynomial1->coff + polynomial2->coff;
//        polynomial3->next = NULL;
//           if(result == NULL){
//               result = polynomial3;
//               q = polynomial3;
//           } 
//           else{
//               q->next = polynomial3;
//               q = polynomial3;
//           }
//     }
//     traversing(polynomial3);
//     return 0;
// }
