/* Convert a number to its binary equivalent */
#include <stdio.h>

int main()
{
    int i, inp;
    printf("Enter Value(whole no.): ");
    scanf(" %d", &inp);

    int tmp = inp;
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
