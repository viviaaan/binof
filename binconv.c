/* Convert a number to binary */
#include <stdio.h>
#include <stdlib.h>
void toBits(int num);

int main(int argc, char *argv[])
{
    int input;

    if (argc == 1) {
        printf("Enter a whole number : ");
        scanf(" %d", &input);

        if (input < 0)
            printf("error: %d is not a whole number\n", input);
        else
          toBits(input);
    }
    else
        for (int j = 1; j < argc; j++) {
            input = atoi(argv[j]);

            if (input < 0)
                printf("error: %s is not a whole number\n", argv[j]);
            else
              toBits(input);
        }
}

void toBits(int num)
{
    int highest = 0;

    for (int tmp = num; tmp /= 2; highest++) // find the highest power of 2 that's less than num
        ;
    char string[highest];

    if (num % 2)
        putchar('0'); // add leading 0 if num is odd

    int i = 0;
    do
        string[i++] = (num % 2) + '0';
    while (num /= 2);

    while (i)
        putchar(string[--i]); // print the char array backwards

    putchar('\n');
}
