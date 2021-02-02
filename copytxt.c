#include <stdio.h>

int main(void) {
    FILE *fp1, *fp2;
    int c;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    while ((c = fgetc(fp1)) != EOF)
    {
        fputc(c, fp2);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}