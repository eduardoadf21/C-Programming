#include <stdio.h>
#define MAXLINE 1000
#define TABSPACE 8

/* there is one tabstop every 8 spaces */

/* replaces tabs in the input with the proper number of blanks to space to the next tabstop." */

int getline_20(char line[], int length);

main(){

	char line[MAXLINE];
	int len;
	while((len = getline_20(line,MAXLINE)) > 0){
		printf("%s", line);
		printf("%d\n", line[len-3]);
	}
}

int getline_20(char line[], int length){

	int i, c, tab, tabstop;

	for(i=0; i<length-1 && (c=getchar())!=EOF && c != '\n'; ++i)
		if(c == '\t'){
			tabstop = TABSPACE - (i%TABSPACE);
			for(tab=0; tab<tabstop; ++tab)
				line[i++] = ' ';
			--i;
		}
		else line[i] = c;
	
	if(c == '\n'){
		line[i] = c;
		++i;	
	}
	line[i] = '\0';
	++i;

	return i;
}

