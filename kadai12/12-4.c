#include<stdio.h>

int main(){
  char s[20],t[10];
  char *sp,*cp;

  struct{
    char number[5];
  }tel[3],*tp;

  scanf("%s",s);

  sp=s;
  tp=tel;
  cp=tp->number;

  while(*sp!='\0'){
    if(*sp=='-'){
      *cp='\0';
      ++sp;
      cp=(++tp)->number;
    }
    *cp=*sp;
    ++sp;++cp;
  }
  *cp='\0';

  printf("shigai\tshinai\tbango\n");
  printf("%s\t",tel[0].number);
  printf("%s\t",tel[1].number);
  printf("%s\t",tel[2].number);
  printf("\n");
}
