#include <stdio.h>

/*exercises 1-8;1-9;1-10 */

main(){
/*
	int c, nl, blank, tab;

	nl = blank = tab = 0;

	while((c = getchar()) != EOF){
		if(c == '\n')
			++nl;
		if(c == ' ')
			++blank;
		if(c == '\t')
			++tab;
	}

	printf("newlines:%d blanks:%d tabs:%d\n", nl, blank, tab);
		
*/
/*
	int c;
	int blank = 0;

	while((c = getchar()) != EOF){
		if(c == ' ')
			++blank;
		if(c != ' ') 
			blank = 0;
		if(blank > 1 && c == ' '){
			++blank;
			continue;
		}
		else
			putchar(c);
	}
*/
	int c;
	int tab, bspace, bslash;

	while((c = getchar()) != EOF){
		if(c == '\t')
			printf("\\t");
		else if(c == '\b')
			printf("\\b");
		else if(c == 92)
			printf("\\\\");	
		else
			putchar(c);
	}

}



