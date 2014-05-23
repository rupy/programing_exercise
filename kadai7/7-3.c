#include<stdio.h>

int main(){

  int x[10];
  int i;
  int* p;

  int odd = 0,even = 0;

  for(i=0,p=x;i<10;++i,++p){
    scanf("%d",p);
    if(x[i]%2==0)
      even += *p;
    else
      odd += *p;
  }

  printf("%s = %d\n",even>odd?"even":"odd", even>odd?even:odd);
  
  return 0;
}
