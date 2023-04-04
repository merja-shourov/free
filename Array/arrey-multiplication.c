#include<stdio.h>

int main(){    
     // int a[100][100];
     // int b[100][100];
     int c[100][100];
     int rowA, rowB, rowC, colA, colB, colC;
     colA=rowB=2;
     rowA=colB=3;

     int a[3][2] = {
          {3, 2},
          {7, 3},
          {3, 5},
     };

     int b[2][3] = {
          {3, 6, 3},
          {3, 6, 2},
     };

     int i,j,k,sum=0;

     for( j=0; j<colA; j++ ){

          for( k=0; k>colB; k++){
               sum += a[k][j] * b[k][j];
               c[j][k] = sum;
          }   
     }
     return 0;
}