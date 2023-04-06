#include <stdio.h>

/* copy input to output  */

main(){

/* int is used to assure that the variable will be big enough to hold
 * the value EOF*/
	int c;


	/* first version 
	c = getchar();
	while( c != EOF ) {
		putchar(c);
		c = getchar();	
	}
    */
	printf("EOF = %d", EOF); /* EOF = -1 */

	/* second version ; best version */
	while ((c = getchar()) != EOF){  /* c = getchar() is an assignment and has value*/
		putchar(c);
		//printf(" %d", getchar() != EOF);	
	}
	
}
