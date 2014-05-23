#include <stdio.h>
#include <limits.h>

int main(){

  int x[100];
  int* p;
  int sum=0;
  double ave_min = INT_MAX; 
  p = x;

  while(scanf("%d",p)!=EOF){

    sum += *p;//合計を計算する

    if(p-x>=9){//10回ごとの処理
      if(ave_min>(double)sum/10)//10個の平均は最小なら
	ave_min = (double)sum/10;//平均の最小は今回のもの
      
      p=x;sum = 0;//初期化
      printf("ave_min=%lf\n",ave_min);//いまのところの平均の最小を表示
    }
    else{
      ++p;//次へ
    }
  }
  printf("ave_min=%lf\n",ave_min);
  return 0;
}
