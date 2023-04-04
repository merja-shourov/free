// sumation of two array
#include<stdio.h>

int main(){
     int rowA, colA, rowB, colB,row,col;
     rowA=rowB=row=2;
     colA=colB=col=3;


     int first_arr[100][100] ={
          { 3, 4, 2},
          { 2, 4, 2}
     };

     int sec_arr[100][100] = {
          { 3, 5, 3},
          { 2, 4, 7}
     };

     //delcere third arr;
     int third_arr[100][100];
     // print firsat array
     for( int i=0; i<2; i++ ){
          for( int j=0; j<3; j++ ){
               third_arr[i][j] = first_arr[i][j] + sec_arr[i][j];
               printf("%3d", third_arr[i][j]);
          }
          printf("\n");
     }

     
     return 0;
}