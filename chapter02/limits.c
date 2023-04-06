#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(){

	printf("char: [%d, %d]\n", CHAR_MAX, CHAR_MIN);
	printf("short: [%d, %d]\n", SHRT_MAX, SHRT_MIN);
	printf("int: [%d, %d]\n", INT_MAX, INT_MIN);
	printf("long: [%ld, %ld]\n", LONG_MAX, LONG_MIN);
	printf("float: [%f, %f]\n", FLT_MAX, FLT_MIN);

}
