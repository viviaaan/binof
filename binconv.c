/* Convert a number to binary */
#include <stdio.h>
#include <stdlib.h>
void convert(int inp);

int main(int argc, char *argv[])
{
    int inp = 0;
    if (argc == 1) {
        printf("Enter a whole number : ");
        scanf(" %d", &inp);
        convert(inp);
    }
    else {
        for (int j = 1; j < argc; j++) {
            inp = atoi(argv[j]);
            printf("%s = ", argv[j]);
            convert(inp);
        }
    }
}

void convert(int inp)
{
    int tmp = inp;
    int i = 0;
    if (inp < 0)
        printf("error: argument must be a positive integer");
    while (tmp /= 2)
        i++; // `i` equals the largest power of 2 that is less than or equal to `tmp`

    char result[i];
    result[i-1] = '\0';

    for (i = 0; inp >= 1; i++) {
        result[i] = (inp % 2) + '0';
        inp /= 2;
    }

    while (i) // print the char array backwards
        putchar(result[--i]);
    putchar('\n');
}
