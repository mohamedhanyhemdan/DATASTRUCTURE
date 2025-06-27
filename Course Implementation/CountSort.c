#include <stdio.h>
#include <stdlib.h>

int findMax(int *a, int n);
void CountSort(int *a , int n);

int main(){
 int a[]={10,5,8,1,6,9,4,7,5,11};
 int n = 10;
 CountSort(a,n);
 for(int j = 0;j < 10;j++){
  printf("%d\n",a[j]);
 }
 return 0;
}

int findMax(int *a, int n){
 int temp = a[0];
 for(int i = 0;i < n;i++){
  if(temp < a[i]){
   temp = a[i];
  }
 }
 return temp;
}

void CountSort(int *a , int n){
 int max = findMax(a,n);
 int arr[max +1];
 for(int i = 0;i< max +1;i++){
  arr[i] = 0;
 }
 int k = 0 , m = 0;
 for(int j = 0;j < n;j++){
  arr[a[j]]++;
 }
 while(k < max+1){
  if(arr[k] > 0){
   a[m++] = k;
   arr[k]--;
  }
  else{
   k++;
  }
 }
}