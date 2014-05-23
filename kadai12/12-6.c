#include<stdio.h>

int main(){
  char s[20],t[10];
  char *sp,*tp;

  int count=0;
  int tmp_c=0;
  scanf("%s",s);
  scanf("%s",t);

  sp=s;
  tp=t;

  while(*sp!='\0'){;
    while(*sp==*tp){
      if(*(tp+1)=='\0'){
	++count;
	tp=t;
	break;
      }
      ++sp;
      ++tp;
    }
    ++sp;
  }

  printf(" kekka = %d\n",count);
}
