// What does this do?
//
// Note: Please do not write programs like this one!!! Yuck! Very cryptic.
//
// Compare the 8 what?.c programs which are all equivalent
// to get a better understanding of how & why C encodes character sequences


#include <stdio.h>

int main(void) {
    int c1 = 67; //C  
    int c2 = 80; //P 
    int c3 = 49; //1
    int c4 = 53; //5
    int c5 = 49; //1
    int c6 = 49; //1
    int c7 = 32; 

    int c8 = 105;
    int c9 = 115;
    int c10 = 32;
    
    int c11 = 97;
    int c12 = 119;
    int c13 = 101;
    int c14 = 115;
    int c15 = 111;
    int c16 = 109;
    int c17 = 101;
    int c18 = 33;
    int c19 = 10;
    
    putchar(c1);   //equivalent to printf("%c",c1);
    putchar(c2);
    putchar(c3);
    putchar(c4);
    putchar(c5);
    putchar(c6);
    putchar(c7);
    putchar(c8);
    putchar(c9);
    putchar(c10);
    putchar(c11);
    putchar(c12);
    putchar(c13);
    putchar(c14);
    putchar(c15);
    putchar(c16);
    putchar(c17);
    putchar(c18);
    putchar(c19);
    
    return 0;
}