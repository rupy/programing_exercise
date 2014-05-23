#include<stdio.h>

int main(){

  char x[100];
  char* p;
  int result=0;

  scanf("%s",x);

  for(p=x;*p!='\0';++p){
    if(*p=='X')++result;
  }

  printf("Result = %d\n",result);  

  return 0;
}
