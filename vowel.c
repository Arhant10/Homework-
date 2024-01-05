#include <stdio.h>

int main() {
    char ch;

    // Input character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leading whitespace

    // Check if the character is a lowercase vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a lowercase vowel.\n", ch);
    }
    // Check if the character is an uppercase vowel
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is an uppercase vowel.\n", ch);
    }
    // Check if the character is a consonant (neither vowel nor whitespace)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a consonant.\n", ch);
    }
    // If none of the above conditions are met, it's not a valid alphabet character
    else {
        printf("%c is not an alphabet character.\n", ch);
    }

    return 0;
}
