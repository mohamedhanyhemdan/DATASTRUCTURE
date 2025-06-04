#include <stdio.h>

int sum1(int n){
 return n*(n+1)/2;
}
int sum2(int n){
 if(n == 0){
  return 0;
 }
 else{
  return sum2(n -1)+n;
 }
}
int main(){
 printf("%d\n",sum1(5));
 printf("%d\n",sum2(5));
 return 0;
}