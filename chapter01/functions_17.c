#include <stdio.h>

int power(int x, int y); // function prototype

main(){

	int x, y, i;

	for(i = 0; i < 10; ++i)
		printf("%d %d %d \n", i, power(2,i), power(-3,i));

	return 0;
}

int power(int base, int n){
	//int i;    *1st version*
	//int result = 1;
	int p;

	// *2nd version*: n is used as a temporary variable
	for(p = 1; n > 0; --n)  
		p = p * base;

	return p;
}
