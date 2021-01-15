/* Convert a number to its binary equivalent */
#include <stdio.h>

int main()
{
    int i;
    int inp = 0;
    printf("Enter Value(int): ");
    scanf(" %d", &inp);

    int tmp = inp;
    for (i = 0; tmp >= 1 ;i++)
        tmp = tmp / 2; //find out the largest power of 2 that is needed

    char string[i];

    int val = 0;
    int slot = 0;
    while (inp >= 1)
    {
        val = inp % 2;
        string[slot++] = val + '0';
        inp = inp / 2;
    }

    for (i = slot; i >= 0; i--) //the actual binary value is stored backwards in the char array
        putchar(string[i]);     //so print it backwards to make the output right
}
