#include <ctype.h>
#include <stdio.h>


int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\nCharacter classification:\n");
    printf("  isalnum: %d\n", isalnum(ch));
    printf("  isalpha: %d\n", isalpha(ch));
    printf("  isdigit: %d\n", isdigit(ch));
    printf("  islower: %d\n", islower(ch));
    printf("  isupper: %d\n", isupper(ch));
    printf("  isspace: %d\n", isspace(ch));
    printf("  isprint: %d\n", isprint(ch));
    printf("  ispunct: %d\n", ispunct(ch));
    printf("  iscntrl %d\n", iscntrl(ch));
    printf("  isgraph: %d\n", isgraph(ch));
    printf("  isxdigit: %d\n", isxdigit(ch));
    printf("  isblank: %d\n", isblank(ch));
    // ... (demonstrate other functions)

    printf("\nCharacter conversions:\n");
    printf("  toupper('%c'): %c\n", ch, toupper(ch));
    printf("  tolower('%c'): %c\n", ch, tolower(ch));

    return 0;
}