/* Convert a number to binary */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[1])
{
    int inp, tmp;
    int i = 0;

    if (argc == 1) {
        printf("Enter a whole number : ");
        scanf(" %d", &inp);
        tmp = inp;
    }
    else if (argc == 2) // use command-line arg if present
        tmp = inp = atoi(argv[1]);
    else {
        printf("error: expected only one argument\n");
        exit(1);
    }

    if (inp < 0) {
        printf("error: argument must be a positive integer\n");
        exit(1);
    }

    while (tmp /= 2)
        i++; // `i` equals the largest power of 2 that is less than or equal to `tmp`

    char result[i];
    result[i-1] = '\0';

    i = 0;
    while (inp) {
        result[i++] = (inp % 2) + '0';
        inp /= 2;
    }

    while (i) // print the char array backwards
        putchar(result[--i]);
    putchar('\n');
}
