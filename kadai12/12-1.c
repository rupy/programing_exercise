#include<stdio.h>

int main(){
  char s[20],t[10];
  int i,j;
  scanf("%s",s);
  scanf("%s",t);
  i=j=0;
  while(s[i]!='\0'){
    ++i;
  }
  while(t[j]!='\0'){
    s[i]=t[j];
    ++i,++j;
  }
  s[i]='\0';
  printf(" kekka = %s\n",s);
}
