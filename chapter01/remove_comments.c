#include <stdio.h>
#define MAXLINE 1000


int get_line(char line[], int len);
void remove_comments(char line[], char uncommented[], int len);

int lock = 0; /* locks for comment */ 

main(){

	char line[MAXLINE];
	int len;

	while((len = get_line(line,MAXLINE))>0)
		printf("%s", line);
	
}






int get_line(char line[], int len){

	int c, i;//, slashflag;
	int asterisk = 0;
	int slash = 0;
//	int lock = 0;

	for(i=0; i<len-1 && (c=getchar())!=0 && c!='\n'; ++i){
		if(c == 47){
			lock1 = 1;
		}
		if(lock2 == 1 && c == 47 && asterisk == 1){
			printf("hello");
			lock1 = 0;
			lock2 = 0;	
			asterisk = 0;
		}	
		if(lock1 == 0 && lock2 == 0)
			line[i] = c;
		else{
			--i;
		}
	}

	if(c == '\n' && lock1 == 0 && lock2 == 0){
		line[i] = c;
		//lock1 = 0;
	}
	++i;
	line[i] = '\0';

	
	
	return i;
}






