#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input character from the user
    printf("Enter any character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) {
        char lower_ch = tolower(ch);
        switch (lower_ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("'%c' is a Vowel.\n", ch);
                break;
            default:
                printf("'%c' is a Consonant.\n", ch);
                break;
        }
        
    } else {
        printf("'%c' is a Special Character or Digit.\n", ch);
    }

    return 0;
}
