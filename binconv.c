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
        if (convert(inp)) // executes when input is less than 1
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
    int i = 0;

    for (int tmp = inp; tmp /= 2; i++)
        ;
    char string[i];
    if (inp % 2)
        putchar('0'); // add leading 0 if inp is odd

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
