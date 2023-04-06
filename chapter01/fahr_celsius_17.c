#include <stdio.h>

#define LOWER 0 /*lower limit of the table*/
#define UPPER 300 /*upper limit*/
#define STEP 20 /*step size*/

/* print Fahrenheint-Celsius table
 * for fahr = 0, 20, ..., 300 */

float fahr_to_celsius(float fahr);

main(){

	float fahr;
	
	printf("Fahr\tCelsius\n");
	for(fahr = LOWER; fahr <= 300; fahr = fahr + 20)
		printf("%3.0f\t%6.1f\n", fahr, fahr_to_celsius(fahr));
	
	return 0;
}


float fahr_to_celsius(float fahr){
	return (5.0/9.0)*(fahr-32.0);	 
}

