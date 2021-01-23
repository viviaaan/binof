/* Convert a number to binary */
#include <stdio.h>
#include <stdlib.h>
int convert(int inp);

int main(int argc, char *argv[])
{
    int inp;
    if (argc == 1) {
        printf("Enter a whole number : ");
        scanf(" %d", &inp);
        if (convert(inp))
            printf("error: %d is not a whole number\n", inp);
    }
    else
        for (int j = 1; j < argc; j++) {
            inp = atoi(argv[j]);
            if (convert(inp))
                printf("error: %s is not a whole number\n", argv[j]);
        }
}

int convert(int inp)
{
    if (inp < 0)
        return (-1);
    else {
    int tmp = inp;
    int i = 0;

    while (tmp /= 2)
        i++; // `i` equals the largest power of 2 that is less than or equal to `tmp`

    char string[i];

    i = 0;
    do
        string[i++] = (inp % 2) + '0';
    while (inp /= 2);

    while (i) // print the char array backwards
        putchar(string[--i]);
    putchar('\n');

    return 0;
    }
}
