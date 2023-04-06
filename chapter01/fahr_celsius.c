#include <stdio.h>

#define LOWER 0 /*lower limit of the table*/
#define UPPER 300 /*upper limit*/
#define STEP 20 /*step size*/

/* print Fahrenheint-Celsius table
 * for fahr = 0, 20, ..., 300 */

main(){

	float fahr, celsius;

	fahr = LOWER;

	printf("Fahr\tCelsius\n");
	while(fahr <= UPPER){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius); /*width for right justifying */
		fahr = fahr + STEP;	
	} 
	printf("\n");	

	celsius = LOWER;
	
	printf("Celsius\tFahrenheint\n");
	while(celsius <= UPPER){
		fahr = (9.0/5.0)*celsius + 32.0;
		printf("%6.1f\t%3.0f\n", celsius, fahr);
		celsius = celsius + STEP;	
	}
	printf("\n");	

	printf("Fahr\tCelsius\n");
	for(fahr = LOWER; fahr <= 300; fahr = fahr + 20)
		printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
	printf("\n");	
	
	printf("Fahr\tCelsius\n");
	for(fahr = UPPER; fahr >= LOWER; fahr = fahr - 20)
		printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
	printf("\n");	
}




	

