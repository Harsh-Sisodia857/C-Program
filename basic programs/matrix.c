// Addition of matrix

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a[3][3];
//     int b[3][3];
//     int c[3][3];
//     int i,j,k,l;
//     printf("Enter elements of first matrix:\n");
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter elements of second matrix:\n");
//     for(k=0;k<=2;k++){
//         for(l=0;l<=2;l++){
//             scanf("%d",&b[k][l]);
//         }
//     }
//     printf("Addition of matrix:\n");
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//            c[i][j] = a[i][j] + b[i][j];
//             printf("%d  ",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Multiplication of Matrix

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
// int a[10][10],b[10][10],mult[10][10],i,j,k,r,c;
// printf("Enter number of row:");
// scanf("%d",&r);
// printf("Enter number of coloum:");
// scanf("%d",&c);
// printf("Enter first matrix:\n");
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         scanf("%d",&a[i][j]);
//     }
// }
// printf("Enter second matrix:\n");
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         scanf("%d",&b[i][j]);
//     }
// }
// printf("Multiplication of matrix:\n");
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//        mult[i][j] = 0;
//        for(k=0;k<c;k++){
//        mult[i][j] = mult[i][j] + a[i][k] * b[k][j];
//        }      
//     }
// }
//     for(i = 0;i<r;i++){
//         for(j=0;j<c;j++){
//             printf("%d\t",mult[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }