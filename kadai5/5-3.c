#include <stdio.h>

int main(){
  char s[10];
  scanf("%s",s);
  char* pt = s;

  printf("kekka = ");
  for(;*pt!='\0';++pt){
    if(*pt!='a'&&
       *pt!='i'&&
       *pt!='u'&&
       *pt!='e'&&
       *pt!='o')
      printf("%c",*pt);
  }
  puts("");
}
