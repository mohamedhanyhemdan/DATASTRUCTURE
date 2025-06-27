#include <stdio.h>
#include <stdlib.h>

struct Node{
 int data;
 struct Node* next;
}*First = NULL;



void create(int data[], int n)
{
 int i;
 struct Node *t,*last;
 First = (struct Node*)malloc(sizeof(struct Node));
 First->data = data[0];
 First->next = NULL;
 last = First;
 for(i = 1;i<n;i++){
  t = (struct Node*)malloc(sizeof(struct Node));
  t->data = data[i];
  t->next = NULL;
  last->next = t;
  last = t;
 }
};

void display(struct Node *p)
{
 while(p != NULL){
 printf("%d",p->data);
 p = p->next;
 }
};



int main(){
 int arr[5] = {1,2,3,4,5};
 create(arr,5);
 display(First);
 return 0;
}