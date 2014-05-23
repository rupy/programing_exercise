#include <stdio.h>

int main(void){
 
  char x[100];
  scanf("%s",x);
  char* pt;

  for(pt=x;*pt!='\0';++pt);//文字列の最後に移動

  while(pt!=x-1){//最初までひとつずつ表示
    putchar(*pt--);
  }
  puts("");
  
  return 0;
}
