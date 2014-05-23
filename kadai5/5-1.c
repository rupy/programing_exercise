#include <stdio.h>

int main(){
  char s[10], *pt;
  int i;
  scanf("%s",s);
  pt = s;

  for(i = 0;i < 10;++i){
    printf("s[%d] Address %d %d Content %c\n",i,pt,&s[i],*pt);
      pt++;;
  }
  return 0;
}
