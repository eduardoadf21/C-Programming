#include <stdio.h>

#define MAXLINE 1000
#define FOLD 8

int get_line(char line[], int len);
void fold_line(char line[], char folded[], int len);

main(){

	char line[MAXLINE], fold[MAXLINE]; 
	int len, i;

	while((len = get_line(line,MAXLINE))>0){
		fold_line(line,fold,len);
		printf("%s", fold);
	}

	
}


int get_line(char line[], int len){

	int c, i;

	for(i=0; i<len-1 && (c=getchar())!=0 && c!='\n'; ++i)
		line[i] = c;

	if(c == '\n'){
		line[i] = c;
		++i;
	}
	
	line[i] = '\0';
	++i;
	return i;
}

void fold_line(char line[], char folded[], int len){

	int i, j=0, counter=0;

	for(i=0; i<len && line[i] != '\n'; ++i, ++j){
		folded[j] = line[i];
		++counter;
		if(counter >= FOLD && line[i] == ' '){
			folded[j] = '\n';
			counter = 0;
		}
		
	}
	folded[j] = '\n';
	folded[++j] = '\0'; 
}








