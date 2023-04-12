
/* for portability, specify signed or unsigned if non-character data is 
   to be stored in char variables */

/* lower: convert c to lower case; ASCII only */
int lower(int c){

    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A'; 
    else
        return c;
}