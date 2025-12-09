#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("remove.txt", "r");      // original file
    fp2 = fopen("output1.txt", "w");     // output file

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);   // convert to uppercase
        }
        fputc(ch, fp2);         // write to output file
    }

    fclose(fp1);
    fclose(fp2);

    printf("Lowercase converted to uppercase successfully.\n");

    return 0;
}
