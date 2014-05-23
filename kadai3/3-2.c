#include <stdio.h>

int main(){

	FILE* fp;
	int input;
	int max,min;
	if((fp = fopen("3-2.txt","r")) == NULL){
		printf("file open error!!\n");
		return 1;
	}
	
	fscanf(fp,"%d",&max);
	min = max;

	while(fscanf(fp,"%d",&input) != EOF){
		if(input < min)
			min = input;
		if(input > max)
			max = input;
	}
	printf("max = %d\n",max);
	printf("min = %d\n",min);

	fclose(fp);
	return 0;
}
