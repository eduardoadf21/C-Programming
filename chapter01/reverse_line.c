#include <stdio.h>
#define MAXLINE 1000

void reverse(char s[]);
int get_line(char line[], int maxline);	
void copy(char to[], char from[]);

main(){

	int len;
	char line[MAXLINE];
	char reversed[MAXLINE];
	
	while((len = get_line(line,MAXLINE)) > 0){
		reverse(line);		
		printf("%s", line);
	}
}


int get_line(char s[], int lim){

	int c, i;

	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)	
		s[i] = c;

	if(c == '\n'){
		s[i] = c;
		++i;	
	}	

	s[i] = '\0';
	return i;
}

void reverse(char s[]){
	
	int i, c, len;
	len = 0;	

	while(s[len] != '\0')
		++len;
	

	for(i=0; i<len/2; ++i){
		c = s[len-i-2];
		s[len-i-2] = s[i];
		s[i] = c;
	}

}






