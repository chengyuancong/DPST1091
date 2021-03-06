// Silly example #2
// using pointers to array elements
// Andrew Taylor - andrewt@unsw.edu.au
// 27/3/2019

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[2];

    int *i_pointer = &array[0];
    int *sum_pointer = &array[1];

    *i_pointer = 0;
    *sum_pointer = 0;

    while (*i_pointer < 10) {
        *sum_pointer = *sum_pointer + *i_pointer;
        *i_pointer = *i_pointer + 1;
    }

    printf("%d\n", *sum_pointer); // prints 45

    return 0;
}