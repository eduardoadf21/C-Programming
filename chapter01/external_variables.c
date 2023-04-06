#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

/*specialized version of longest line program */

int max; 	/* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved */

int get_line(void);
void copy(void);

main(){
	//extern char line[], longest[];
	//extern int max;
	int len;

	while((len = get_line()) > 0)
		if(len > max){
			max = len;
			copy();
		}
	
	printf("longest line:\n%s\nlength:%d\n", longest, max);
	

}


/* getline: specialized version */
int get_line(void){
	int c, i;
	//extern char line[];

	for(i=0; i<MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;

	if(c == '\n') {
		line[i] = c;
		++i;	
	}
	line[i] = '\0';
	return i;
}


/* copy: specialized version */
void copy(void){
	
	int i;
	//extern char line[], longest[];

	i = 0;
	while((longest[i] = line[i]) != '\0')	
		++i;

}
