#include <stdio.h>

int main(void){

  char x[100],y[100];
  scanf("%s",x);
  scanf("%s",y);

  int max = 0;
  int max_all = 0;
  char *p1,*p2;

  for(p1=x;*p1!='\0';++p1){
    for(p2=y;*p2!='\0';++p2){
      while(*(p1+max)!='\0'&&//文字列終端にきていないことの確認
	    *(p1+max)==*(p2+max)){//同じなら続けてチェックする
	++max;
      }
      if(max_all<max){//もっとも長い連続する文字列の長さを探す
	max_all=max;
      }
      max=0;
    }
 
  }
  printf("\n %d\n",max_all);
  return 0;
}
