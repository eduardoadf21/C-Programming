#include <stdio.h>
#define MAXLINE 1000 /* maximum input of line */
#define MAXLINES 200  /* maximum number os lines saved */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

main(){

	int len, nlines;
	char line[MAXLINE];
	char lines[MAXLINES][MAXLINES];

	int j = 0; /* lines index */
	int tb = 2; /* trailing blanks counter */

	/* tb has to be 2 because the last two character are '\n '\0' */
	/* "h - e - l - l - o - \n - \0" */

	while((len = get_line(line,MAXLINE)) > 0){
		while(line[len-tb] == ' ' || line[len-tb] == '\t'){
			line[len-tb] = '\n';
			line[len-tb+1] = '\0';
			++tb;	
			printf("white space cleaned!\n");
		}

		tb = 2;

		if(line[0] != '\n')
			copy(lines[j],line);	
		else printf ("blank line removed!\n");

		++j;	
	}
	
	int i;	
	for (i = 0; i < j; i++){
		printf("%s", lines[i]);	
	}
	
	return 0;


}


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

void copy(char to[], char from[]){
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}


