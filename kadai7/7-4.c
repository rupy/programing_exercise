#include <stdio.h>
#include <limits.h>

int main(){

  int x[10];
  int min=INT_MAX;
  int sum=0;
  int* p;

  for(p=x;p!=(x+10);++p){//ポインタが最後の要素の次を指しても構わないので(x+10)
    scanf("%d",p);
    if(*p<min)min=*p;
  }

  for(p=x;p!=(x+10);++p){
    if(*p!=min)
      sum += *p;
  }

  printf("sum = %d\n",sum);

  return 0;
}
