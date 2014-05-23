#include<stdio.h>

int main(){
  char s[20],t[10],u[30];

  char *sp,*tp,*up;
  scanf("%s",s);
  scanf("%s",t);

  sp=s;
  tp=t;
  up=u;

  while(*sp!='\0')  ++sp;
  while(*tp!='\0')  ++tp;
  while(sp!=s){
    *up=*(--sp);
    ++up;
  }
  *sp='\0';

  while(tp!=t){
    *up=*(--tp);
    ++up;
  }
  *tp='\0';

  printf(" kekka = %s\n",u);
}
