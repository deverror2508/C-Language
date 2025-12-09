#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("remove.txt", "r");      // original file
    fp2 = fopen("temp.txt", "w");       // temporary file

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        if (!isdigit(ch)) {            // write only NON-digit characters
            fputc(ch, fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);

    // remove original file
    remove("remove.txt");

    // rename temp to original
    rename("temp.txt", "remove.txt");

    printf("Digits removed successfully from the same file.\n");

    return 0;
}
