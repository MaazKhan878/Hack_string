#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"string_utils.h"
// Function: replace charater in the string
void replaceChar(char *name, char oldChar, char newChar) {
    int i = 0;
    for (i = 0; name[i]!= '\0'; i++) {
        if (name[i] == oldChar) {
            name[i] = newChar;
        }
    }
    name[i] = '\0';
    printf("%s\n", name);
}