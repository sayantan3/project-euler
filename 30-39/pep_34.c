#include<stdio.h>

unsigned fact(unsigned n);

int main(void){
	
	unsigned i, sum = 0;
	char buf[20];

	for (i = 3; i < 1000000; i++){
	unsigned j, s = 0;

	snprintf(buf, sizeof buf, "%u", i);
	for (j = 0; buf[j] != 0; j++){
			s += fact(buf[j] - '0');
	}	
		if ( i == s){
			sum += s;
		}
	}	
	
	printf("%u \n", sum);

	return 0;
}

unsigned fact(unsigned n){
	unsigned f = 1;	
	while(n != 0){

		f *= n--;
	}
	
	return f;
}

