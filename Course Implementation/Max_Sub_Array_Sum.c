#include <stdio.h>
#include <stdlib.h>

int maxSubArraySum(int *arr,int len);

int main(void){
 int array[] = {1,2,3,4,5,6,7,8,9,10};
 maxSubArraySum(array,10);
 return 0;
}

int maxSubArraySum(int *arr,int len){
 int maxSum = 0;
 int start = 0 , end = 0;
 for(int i = 0; i < len;i++){
  int sum = 0;
  for(int j = i;j < len;j++){
   sum += arr[j];
   if(sum > maxSum){
    maxSum = sum;
    start = i;
    end = j;
   }
  }
 }
 printf("%d",maxSum);
 return maxSum;
}