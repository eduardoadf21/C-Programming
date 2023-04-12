#include <stdio.h>

void leap_year(int year);

void leap_year(int year){
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("%d is leap year", year);
    else
        printf("%d is not a leap year", year);
}

main(){}