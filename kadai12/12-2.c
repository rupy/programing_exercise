#include<stdio.h>

int main(){
  char s[20],t[10];

  char *sp,*tp;
  scanf("%s",s);
  scanf("%s",t);

  sp=s;
  tp=t;

  while(*sp!='\0'){
    ++sp;
  }
  while(*tp!='\0'){
    *sp=*tp;
    ++sp;
    ++tp;
  }
  *sp='\0';

  printf(" kekka = %s\n",s);
}
