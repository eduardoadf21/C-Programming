#include <stdio.h>

int get_line(char line[], int maxline);	

int get_line(char s[], int lim){
    int i, c;
    for(i=0; i<lim-1; ++i){
        if((c=getchar())!=EOF){
            if(c != '\n'){
                s[i]=c;
            }
        }
    }
    return i;
}