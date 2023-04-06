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
			//	printf("blank count = 1\n");
				line[i] = ' ';
				line[++i] = c;
				blank_count = 0;
			}
			else if (blank_count >= tabstop){
				while(blank_count >= tabstop){
						tabstop = TABSPACE - ((imag_i-blank_count)%TABSPACE);
			//			printf("blank count>tabstop; blank count=%d; tabstop=%d; i=%d; imaginary i:%d\n", blank_count, tabstop, i, imag_i);	
						line[i] = '\t';
			//			printf("tab inserido em i=%d\n", i);
						++i;
						blank_count = blank_count - tabstop;
						tabstop = TABSPACE - ((imag_i-blank_count)%TABSPACE);
				}
			}
			if(blank_count > 0) 
			//	printf("blank count<8; blank count=%d; tabstop=%d; i=%d\n", blank_count, tabstop, i);	
			while(blank_count>0){
				line[i] = ' ';	
			//	printf("blank inserido em i=%d\n", i);
				--blank_count;
				++i;
			}
			//	printf("i=%d imag_i=%d\n", i, imag_i);	
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



	

