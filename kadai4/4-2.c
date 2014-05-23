#include <stdio.h>

int main(){

  char x[100];

  while(EOF != scanf("%s",x)){
    printf("moji=%s\n",x);
  }
}
