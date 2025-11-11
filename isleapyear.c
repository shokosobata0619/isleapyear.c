
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check number of arguments
    if (argc != 2) {
        printf("How To Use: %s <year>\n", argv[0]);
        return 1;
    }

    int year = atoi(argv[1]);

    // Leap-year rule: divisible by 4 and not by 100, unless divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d was a leap year\n", year);
    } else {
        printf("%d was not a leap year\n", year);
    }

    return 0;
}
