#include <stdio.h>
int swap(int *n, int *m);
int arr[8] = {-1,-2,3,4,-5,-6,7,-8};
int main(){
 int j = sizeof(arr)/sizeof(arr[0])-1;
 int i = 0;
 while(i < j){
  while(arr[i] < 0)
  {
   i++;
  }
  while(arr[j] >= 0)
  {
   j--;
  }
  if(i < j){
   swap(&arr[i],&arr[j]);
  }
 }
 for(int i = 0; i < 8;i++){
  printf("%d",arr[i]);
 }
 return 0;
}

int swap(int *n, int *m){
 int temp;
 temp = *n;
 *n = *m;
 *m = temp;
 return 0;
}