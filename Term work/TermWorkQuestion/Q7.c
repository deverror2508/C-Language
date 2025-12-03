#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int maxLen = 0;
    int startOfMax = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    // Check all substrings starting from each position
    for (int i = 0; i < n; i++) {
        int visited[256] = {0};   // mark characters seen
        int length = 0;

        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)str[j]] == 1) {
                break; // repeated character found
            }
            visited[(unsigned char)str[j]] = 1;
            length++;
        }

        // update max length
        if (length > maxLen) {
            maxLen = length;
            startOfMax = i;
        }
    }

    // Print results
    printf("Longest substring without repeating characters: %d\n", maxLen);
    printf("Substring: ");
    for (int i = startOfMax; i < startOfMax + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
