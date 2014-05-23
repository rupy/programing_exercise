#include <stdio.h>

int main(void){

  struct meibo{
    char name[50],tel[30];
    int height;
  }data[10];
  struct meibo *pt;

  int i;
  for(i=0;i<10;++i)
    scanf("%s %s %d",data[i].name,data[i].tel,&data[i].height);
  
  printf("     name     phone     height\n");

  pt = data;
  for(i=0;i<10;++i,++pt)
    if(data[i].height<170)
      printf("%10s %10s %3d\n",pt->name,pt->tel,pt->height);
  
}
