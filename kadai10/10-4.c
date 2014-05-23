#include <stdio.h>
#include <string.h>

int check_a(char name[]){
  int i,cnt=0;
  for(i=0;name[i]!='\0';++i){
    if(name[i]=='a')cnt++;
  }
  return cnt;
}

int main(void){

  struct{
    char name[50],tel[30];
    int height;
  }data[10],*pt;

  size_t min=50;
  int min_l;

  int i;
  for(i=0;i<10;++i){
    scanf("%s %s %d",data[i].name,data[i].tel,&data[i].height);
  }
  
  printf("     name     phone     height\n");

  pt = &data[0];
  for(i=0;i<10;++i,++pt){
    if(check_a(pt->name)==2){
      printf("%10s %10s %3d\n",pt->name,pt->tel,pt->height);
    }
  }

  
}
