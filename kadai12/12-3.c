#include<stdio.h>

int main(){
  char s[20],t[10];
  char *sp,*tp;

  scanf("%s",s);

  sp=s;
  tp=t;

  while(*sp!='\0'){
    if(*sp!='-'){
      *tp=*sp;
      ++tp;
    }
    ++sp;
  }
  *tp='\0';

  printf(" Old TEL = %s\n",s);
  printf(" New TEL = %s\n",t);
}
