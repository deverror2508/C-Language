#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s <filename> <substring>\n", argv[0]);
        return 1;
    }
    FILE *fp;
    char line[500];
    char *filename = argv[1];
    char *substr = argv[2];
    int lineNo = 0, count = 0;
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }
    while (fgets(line, sizeof(line), fp))
    {
        lineNo++;
        // Search substring inside the line
        char *ptr = line;
        while ((ptr = strstr(ptr, substr)) != NULL)
        {
            count++;
            ptr += strlen(substr); // move pointer ahead
        }
        if (strstr(line, substr) != NULL)
        {
            printf("Substring found in line %d: %s", lineNo, line);
        }
    }
    fclose(fp);
    printf("\nTotal occurrences of substring \"%s\": %d\n", substr, count);
    return 0;
}