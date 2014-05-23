#include <stdio.h>

int main(void){
  char x[100];
  int length=0;
  scanf("%s",&x);

  for(length=0;x[length];++length);
  printf("Length = %d\n",length);
  return 0;
}
