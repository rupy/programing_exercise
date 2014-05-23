#include <stdio.h>

int main(){

  char x[100];
  int a,i,u,e,o;

  while(scanf("%s",x)!= EOF){
    a = i = u = e = o = 0;
    int j;
    for(j = 0;x[j] !='\0';++j){
      if(x[j] == 'a')++a;
      else if(x[j] == 'i')++i;
      else if(x[j] == 'u')++u;
      else if(x[j] == 'e')++e;
      else if(x[j] == 'o')++o;
    }
    printf("a = %d,i = %d,u = %d,e = %d,o = %d",a,i,u,e,o);
 
  }
  putchar('\n');
}
