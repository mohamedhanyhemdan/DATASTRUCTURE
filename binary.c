#include <stdio.h>
int binarySearch(int arr1[], int key  , int length);

int arr[] = {1,2,3,4,5,6,7,8};
int key = 5;
int main(){
 int m ;
 m = binarySearch(arr,5 , (sizeof(arr)/sizeof(int)));
 printf("%d",m);
 return 0;
}

int binarySearch(int arr1[], int key  , int length){
 int h = length - 1;
 int l = 0;
 while(l <= h){
 int mid = (l+h)/2;
 if(arr1[mid] == key){
  return key;
 }
 else if (arr1[mid] > key){
  h = mid - 1;
 }
 else if(arr1[mid] < key){
  l = mid + 1;
 }
}
}