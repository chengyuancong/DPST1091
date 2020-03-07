//z5285978
#include<stdio.h>

int isLeapYear(int year);
void printleap(int start, int finish);

int main(void){
    int start;
    int finish;
    printf("Enter start year: ");
    scanf("%d", &start);
    if (start >= 0) {
        printf("Enter finish year: ");
        scanf("%d", &finish);
        if (finish >= 0) {
            printleap(start, finish);
        } else {
            printf("Invalid input\n");
        }
    } else {
        printf("Invalid input\n");
    }
    return 0;
}
  

int isLeapYear(int year) {    
    if (year % 4 != 0) {
        return 0;
    } else if (year % 100 != 0) {
        return 1;
    } else if (year % 400 != 0) {
        return 0;
    } else {
        return 1;
    }
}

void printleap(int start, int finish) {
    printf("The leap years between %d and %d are: ", start, finish);
    for (; start <= finish; start++) {
        if (isLeapYear(start) == 1) {
            printf("%d ", start);
        }
    }
}

