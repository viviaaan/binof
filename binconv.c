/* Convert a number to its binary equivalent */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[1])
{
    int i, inp, tmp;

    if (argc == 2) //use command-line arg if present
        tmp = inp = atoi(argv[1]);
    else
    {
        printf("Enter whole number : ");
        scanf(" %d", &inp);
        tmp = inp;
    }

    if (inp < 0)
    {
        printf("error: argument must be a positive integer\n");
        exit(1);
    }

    for (i = 0; tmp >= 1 ;i++)
        tmp /= 2; // find out the largest power of 2 that is needed

    char string[i];

    i = 0;
    while (inp >= 1)
    {
        string[i++] = (inp % 2) + '0';
        inp /= 2;
    }

    while (i >= 0) // print the char array backwards for the right binary value
        putchar(string[i--]);
    putchar('\n');
}
