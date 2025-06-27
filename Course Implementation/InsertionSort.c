#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int *a,int len);
int main(){
 int aa[5] ={5,4,3,2,1};
 InsertionSort(aa,5);

 for(int i = 0;i< 5;i++){
  printf("%d",aa[i]);
 }
 return 0;
}

void InsertionSort(int *a,int len){
 int j,x;
 for(int i = 1; i < len;i++){
  j = i - 1;
  x = a[i];
  while((j > -1) && (a[j] > x)){
   a[j+1]=a[j];
   j--;
  }
  a[j+1] = x;
 }
}