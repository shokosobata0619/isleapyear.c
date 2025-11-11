#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {               #set arguement count & arguement vector
    if (argc != 2) {                              #check number of arguements
        printf("How to use: %s <year>\n", argv[0]);    #explain how to use the program
        return 1;
    }

    int year = atoi(argv[1]);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {  #check if leap year
        printf("%d was a leap year\n", year);                      #confirm it was leap year
    } else {
        printf("%d was not a leap year\n", year);                  #notify it was not leap year
    }

    return 0;
}
