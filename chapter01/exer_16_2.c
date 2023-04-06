#include <stdio.h>

/* counts types of characters */

main(){


	int i, c;
	int types_c[95];

	for(i = 0; i <= 95; ++i)
		types_c[i] = 0;

	while((c = getchar()) != EOF)
		if(c >= 32 && c <= 126)


	for(i = 32; i <= 126; i++)
		printf("%c: %d \n", i, types_c[i-32]);	
	


}
