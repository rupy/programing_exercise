#include <stdio.h>


int main(void){

  struct meibo{
    char name[50],tel[30];
    int height;
    struct meibo* next;
  }data[10];

  struct meibo* pt;

  int i;
  for(i=0;i<10;++i){
    scanf("%s %s %d",data[i].name,data[i].tel,&data[i].height);
  }
  for(;i>=0;--i){
    data[i].next = &data[i-1];
  }
  data[0].next = NULL;

  printf("     name     phone     height\n");

  for(pt=&data[9];pt!=NULL;pt=pt->next){
    printf("%10s %10s %3d\n",pt->name,pt->tel,pt->height);
  }
}
