#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */ 
#define MAXLINES 30  /* maximum of long lines saved */
#define arbitrarily_long 30 

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */

main(){

	int len; 	/* current line length */
	int max;	/* maximum length seen so far */
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE]; /* longest line saved */
	char long_lines[MAXLINES][MAXLINE];
	int lengths[MAXLINES];
	int j = 0; /* long lines index */


	max = 0;

	while((len = get_line(line, MAXLINE)) > 0)
			if (len > max) {
				max = len;
				copy(longest,line);
			}
			else if (len > 80){
				copy(long_lines[j],line);	
				lengths[j] = len;
				//long_lines[j++][len] = '\0';
				++j;
			}
		

	if (max > 0){	/* there was a line */
		printf("\n%s", longest);
		printf("length of longest line :%d\n\n", max);
	}
	
	int i;
	printf("long lines:\n");
	for (i = 0; i < j; i++){
		printf("%s", long_lines[i]);	
		printf("length:%d\n\\\n", lengths[i]);
	}
	
	return 0;
}


/* getline: read a line into s, return length */
int get_line(char s[], int lim){

	int c, i;

	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;

	if(c == '\n') {
		s[i] = c;
		++i;	
	}
	s[i] = '\0'; /* null character, whose value is zero */
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]){
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}










