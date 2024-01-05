#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    
    // Attempt to read a character from the keyboard
    int result = scanf(" %c", &ch);
    
    // Display the result
    if (result == 1) {
        printf("0\n");  // Character was read
    } else {
        printf("1\n");  // No character was read
    }

    return 0;
}
