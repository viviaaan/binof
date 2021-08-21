/* convert ints to binary */
#include <stdio.h>
#include <stdlib.h>
char* toBits(unsigned long long num);

int main(int argc, char *argv[]) {
    unsigned long long input;
    char* ans;

    if (argc == 1) { // interactive mode
       do {
        printf("Int: ");
        scanf(" %llu", &input);
        ans = toBits(input);
        printf("%s\n", ans);
        free(ans);
      } while(getchar() != EOF);
    }
    else
        for (int j = 1; j < argc; j++) { // command line mode
            input = atoi(argv[j]);
            ans = toBits(input);
            printf("%s\n", ans);
            free(ans);
        }
}

char* toBits(unsigned long long num) {
    int highest, tmp;
    highest = tmp = 0;
    for (tmp = num; tmp /= 2; highest++) // find the highest power of 2 that is less than num
        ;

    char tmpstr[highest];
    char* bitstr = (char*)malloc(sizeof(tmpstr)+1); // this should be freed by the caller after usage

    int i = 0;
    num = abs(num);
    do
        tmpstr[i++] = (num % 2) + '0';
    while (num /= 2);

    int j = 0;
    while (i)
        bitstr[j++] = tmpstr[--i]; // reversing tmpstr into bitstr

    return(bitstr);
}
