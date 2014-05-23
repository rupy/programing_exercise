#include <stdio.h>

int main(void){

	int c;
	int i;

	for(i =0;c!='\n';++i){
		c = getchar();
		putchar(c);
		if(c=='a'||c=='i'||c=='u'||c=='e'||c=='o')
			putchar(c);
		
	}

	return 0;
}
