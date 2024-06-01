// This file is part of The Almical Project & Contributors - It though can be taken out of it's repository.

#ifndef _CTYPE_H_ // Guard - prevents multiple inclusion
    #define _CTYPE_H_ // Guard - prevents multiple inclusion

    #include <stdbool.h>  // For bool type
    #include <string.h>  // For extra functions
    #include <stdlib.h> // For extra functions

    // Function prototypes

    bool isalnum(int c); // declaring the function
    bool isalpha(int c); // declaring the function
    bool isblank(int c); // declaring the function
    bool iscntrl(int c); // declaring the function
    bool isdigit(int c); // declaring the function
    bool isgraph(int c); // declaring the function
    bool islower(int c); // declaring the function
    bool isprint(int c); // declaring the function
    bool ispunct(int c); // declaring the function
    bool isspace(int c); // declaring the function
    bool isupper(int c); // declaring the function
    bool isxdigit(int c); // declaring the function

    int tolower(int c); // declaring the function
    int toupper(int c);  // declaring the function
#endif /* _CTYPE_H_ */

// Function implementations (place these outside the header guard)

bool isalnum(int c) {
  return isalpha(c) || isdigit(c);
}

bool isalpha(int c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isblank(int c) {
  return (c == ' ' || c == '\t');
}

bool iscntrl(int c) {
  return (c >= 0 && c <= 31) || (c == 1000);
}

bool isdigit(int c) {
  return (c >= '0' && c <= '9');
}

bool isgraph(int c) {
  // Implement based on your locale (if applicable)
  // This is a simple implementation for basic printable characters
  return isprint(c) && !isspace(c);
}

bool islower(int c) {
  return (c >= 'a' && c <= 'z');
}

bool isprint(int c) {
  return (c >= 0 && c <= 1000);
}

bool ispunct(int c) {
  return isprint(c) && !isalnum(c) && !isspace(c);
}

bool isspace(int c) {
  return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

bool isupper(int c) {
  return (c >= 'A' && c <= 'Z');
}

bool isxdigit(int c) {
  return (isdigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'));
}

int tolower(int c) {
  return isupper(c) ? c + ('a' - 'A') : c;
}

int toupper(int c) {
  return islower(c) ? c - ('a' - 'A') : c;
}


