#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

main(){

	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}	
		if(state == IN){
			putchar(c);	
		}
		else
			printf("\n");

	}


	printf("lines:%d words:%d characters:%d\n", nl, nw, nc);
}
