
#include <stdio.h>
#define TABSPACE 8
#define MAXLINE 1000

int getline_21(char line[], int length);

/* replaces blanks for the minnimum number of tabs and blanks to achieve
 * same spacing*/
main(){

	char line[MAXLINE];
	int len, i;

	while((len = getline_21(line,MAXLINE))>0){
		printf("%s", line);
		
		for(i=0;i<len;++i)
			printf("%d ", line[i]);
		printf("len = %d\n", len);
		
	}
}



int getline_21(char line[], int length){

	int i, c, tab, tabstop;
	int blank_count=0;
	int imag_i=0;


	for(i=0; i<length-1 && (c=getchar())!=EOF && c != '\n'; ++i , ++imag_i){
		tabstop = TABSPACE - (imag_i%TABSPACE);
		if(c == ' '){
			++blank_count;
			--i;
		}
		else { /* full in the blanks */
			tabstop = TABSPACE - ((imag_i-blank_count)%TABSPACE);
			if(blank_count == 1){
				line[i] = ' ';
				blank_count = 0;
			}
			else if (blank_count >= tabstop){
				while(blank_count >= tabstop){
						tabstop = TABSPACE - ((imag_i-blank_count)%TABSPACE);
						line[i] = '\t';
						++i;
						blank_count = blank_count - tabstop;
				}
			}
			while(blank_count>0){
				line[i] = ' ';	
				--blank_count;
				++i;
			}
			line[i] = c;
		}

	}

	if(c == '\n'){
		line[i] = c;
		++i;	
	}
	line[i] = '\0';
	++i;

	return i;
}



	

