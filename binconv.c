/* Convert a number to its binary equivalent */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[1])
{
    int inp, tmp;
    int i = 0;

    if (argc == 1) {
        printf("Enter whole number : ");
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

    while ((tmp /= 2) > 1)
        i++; // find out the largest power of 2 that is needed

    char string[i]; // assign a char array of the required size
    string[i-1] = '\0';


    i = 0;
    while (inp >= 1) {
        string[i++] = (inp % 2) + '0';
        inp /= 2;
    }

    while (i >= 0) // print the char array backwards for the right binary value
        putchar(string[--i]);
    putchar('\n');
}
