#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch[200];

    fp = fopen("output.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while (fgets(ch, sizeof(ch), fp)) {
        printf("%s", ch);
    }

    fclose(fp);
    return 0;
}
