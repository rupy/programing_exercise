#include <stdio.h>

int main(void){

  char x[100];
  int a,b;
  char *st,*ed;
  while(EOF!=scanf("%s %d %d",x,&a,&b)){
    
    st=x+a-1;//添字で計算なので-1
    ed=x+b-1;//添字で計算なので-1
    printf("Result = ");
    
    if(a<b){
      for(;st!=ed+1;++st){//最後も見るから+1
	putchar(*st);
      }
    }else if(a>b){
      for(;st!=ed-1;--st){//最後も見るから-1
	putchar(*st);
      }
    }
    puts("");
  }
  return 0;
}
