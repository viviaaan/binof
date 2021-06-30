/* find the two's complement of integers */
#include <stdio.h>
#include <stdlib.h>
char* toBits(int num);

int main(int argc, char *argv[])
{
    int input;

    if (argc == 1) {
        printf("Enter an integer: ");
        scanf(" %d", &input);
        printf("%s", toBits(input));
        putchar('\n');
    }
    else
        for (int j = 1; j < argc; j++) {
            input = atoi(argv[j]);
            printf("%s", toBits(input));
            putchar('\n');

        }
}

char* toBits(int num)
{
    int highest, tmp;
    highest = tmp = 0;

    for (tmp = num; tmp /= 2; highest++) // find the highest power of 2 less than num
        ;
    char tmpstr[highest];
    char* bitstr = (char*)malloc(sizeof(tmpstr)+1);

    if (num < 0) // figure out MSB
      bitstr[0] = '1';
    else
      bitstr[0] = '0';

    int i = 0;
    num = abs(num);
    do // figure out rest of the bits
        tmpstr[i++] = (num % 2) + '0';
    while (num /= 2);

    int j = 1;
    while (i)
        bitstr[j++] = tmpstr[--i]; // reversing tmpstr into bitstr

    return(bitstr);
    free(bitstr);
}
