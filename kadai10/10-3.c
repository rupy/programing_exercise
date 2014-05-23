#include <stdio.h>
#include <string.h>

int main(void){

  struct{
    char name[50],tel[30];
    int height;
  }data[10] ,*pt;

  size_t min=50;
  int min_l;

  int i;
  for(i=0;i<10;++i){
    scanf("%s %s %d",data[i].name,data[i].tel,&data[i].height);
  }
  
  printf("     name     phone     height\n");

  pt = data;
  for(i=0;i<10;++i,++pt){
    if(strlen(pt->name)<=6){
      printf("%10s %10s %3d\n",pt->name,pt->tel,pt->height);
    }
  }

  
}
