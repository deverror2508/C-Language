#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("data.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        if (!isdigit(ch)) {   // If NOT a digit, write to output
            fputc(ch, fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);

    printf("All digits removed successfully. Check output.txt\n");

    return 0;
}
