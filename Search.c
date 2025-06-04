#include <stdio.h>

int arr[10] = {0,1,2,3,4,5,6,7,8,9};
int num = 8;
int i = 0;
int main(){
 for(i = 9;i > 1;i /= 2){
  printf("i = %d",i);
  if(arr[i] > num){
   break;
  }
 }
 return 0;
}