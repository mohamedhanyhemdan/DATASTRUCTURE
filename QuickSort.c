#include <stdio.h>
#include <stdlib.h>

int swap(int *n, int *m);
int partition(int *a,int l,int h);
void QuickSort(int *a, int l, int h);

int main(){
 int a[]={10,5,8,1,6,9,4,7,5,11,__INT32_MAX__};
 int n = 11;
 QuickSort(a,0,10);
 for(int j = 0;j < 10;j++){
  printf("%d",a[j]);
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

int partition(int *a,int l,int h){
 int pivot = a[l];
 int i = l , j = h;
 do{
  do{
   i++;
  }while(a[i] <= pivot);
  do{
   j--;
  }while(a[j] > pivot);

  if(i < j){
   swap(&a[i],&a[j]);
  }
 }while(i < j);
 swap(&a[l],&a[j]);
 return j;
}

void QuickSort(int *a, int l, int h){
 int j;
 if(l < h){
  j = partition(a,l,h);
  QuickSort(a,l,j);
  QuickSort(a,j+1,h);
 }
}