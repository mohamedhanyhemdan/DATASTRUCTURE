#include <stdio.h>

char *st = "finding";
int i = 0;
long d , x;
int main(){
 while( st[i] != '\0'){
  x = 1;
  x = x << (st[i] - 97);
  if((d & x)> 0){
   printf("%c is duple \n",st[i]);
  }
  else{
  d = x | d;
  }
   i++;
  }
 return 0;
}