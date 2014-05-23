#include <stdio.h>


int main(void){

  struct meibo{
    char name[50],tel[30];
    int height;
    struct meibo* next;
  }data[10];

  struct meibo over_height,under_height;
  struct meibo* pt=&over_height;
  int i;

  for(i=0;i<10;++i){
    scanf("%s %s %d",data[i].name,data[i].tel,&data[i].height);
  }

  for(i=0;i<9;++i){
    if(data[i].height>=170){
      pt->next=&data[i];
      pt=&data[i];
    }
  }
  pt->next = NULL;

  pt=&under_height;
  for(i=0;i<9;++i){
    if(data[i].height<170){
      pt->next=&data[i];
      pt=&data[i];
    }
  }
  pt->next = NULL;

  printf("     name     phone     height\n");

  printf("＜身長が170以上の人のリスト＞\n");
  for(pt=over_height.next;pt!=NULL;pt=pt->next){
      printf("%10s %10s %3d\n",pt->name,pt->tel,pt->height);
  }
  printf("＜身長が170未満の人のリスト＞\n");
  for(pt=under_height.next;pt!=NULL;pt=pt->next){
      printf("%10s %10s %3d\n",pt->name,pt->tel,pt->height);
  }
  return 0;
}
