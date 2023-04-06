#include <stdio.h>

/* in linux CTRL + D = EOF */
/* count characters in input */

main(){
/*  1st version 
 *
	long nc = 0;

	while(getchar() != EOF)
		++nc;

	printf("%ld\n", nc);
*/

	/* 2nd version */

	double nc;
	for(nc = 0; getchar() != EOF; ++nc)
			;
	

	printf("%.0f\n", nc);

}
