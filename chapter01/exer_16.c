#include <stdio.h>

// exercise 1.13
#define IN 1
#define OUT 0
#define MAXSIZE 20 /* maximum word size */

/* frequency of different sizes of words histogram */

main(){

	int c, i, state;
	int nletters[MAXSIZE];	
	int nw, nc, nC;
	nw = nc = nC = 0;

	state = OUT;

	for(i = 0; i < MAXSIZE; ++i)
		nletters[i] = 0;


	while((c = getchar()) != EOF){
		++nc;
		++nC;
		if(c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else if ( state == OUT ){
			state = IN;
			if(nc >= 0 && nc < MAXSIZE){
				++nletters[nc-1];
			}
			nc = 0;
			++nw;
		}
	}
	int j;
	for(i = 1; i <= 15; ++i){
		for(j = 0; j < nletters[i]; ++j)
			printf("_");
		printf("\n");
	}


	printf("\nwords = %d, characters = %d\n", nw, nC);
		
}
