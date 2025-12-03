#include <stdio.h>

void print_letter_diamond(char base_char) {
    int N = base_char - 'A' + 1; // N = 5 for 'E'
    int i, j;
    
    // 1. UPPER HALF (Including the middle row)
    // i controls the row number (0 to N-1)
    for (i = 0; i < N; i++) {
        // Print leading spaces
        // The number of spaces decreases from N-1 down to 0
        for (j = 0; j < N - 1 - i; j++) {
            printf("  "); // Print two spaces for better diamond shape
        }
        
        // Print characters from 'E' down to the current minimum (left side)
        // j controls the character's offset from base_char
        for (j = 0; j <= i; j++) {
            printf("%c ", base_char - j);
        }
        
        // Print characters from the current minimum + 1 up to 'E' (right side)
        // Start from the character whose ASCII value is (base_char - i + 1)
        for (j = 1; j <= i; j++) {
            printf("%c ", base_char - i + j);
        }
        
        printf("\n"); // Move to the next line
    }
    
    // ---
    
    // 2. LOWER HALF (Excluding the middle row)
    // i controls the row number (0 to N-2) for the contracting part
    for (i = 0; i < N - 1; i++) {
        // Print leading spaces
        // The number of spaces increases from 1 up to N-1
        for (j = 0; j <= i; j++) {
            printf("  "); 
        }
        
        // Calculate the length of the character sequence for this row.
        // It corresponds to the upper half's row (N - 2 - i)
        int current_length = N - 1 - i - 1; 

        // Print characters from 'E' down to the current minimum (left side)
        for (j = 0; j <= current_length; j++) {
            printf("%c ", base_char - j);
        }
        
        // Print characters for the right side
        // Start from the character whose ASCII value is (base_char - current_length + 1)
        for (j = 1; j <= current_length; j++) {
            printf("%c ", base_char - current_length + j);
        }
        
        printf("\n"); // Move to the next line
    }
}

int main() {
    print_letter_diamond('E');
    return 0;
}