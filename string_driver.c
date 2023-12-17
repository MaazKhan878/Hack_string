#include <stdio.h>
#include <string.h>
#include "string_utils.h"
int main(){
    // string replace oldchar by newchar through a function
    char name[] = "MazzKhan";
    char oldChar = 'z';
    char newChar = 'a';

    printf("Original String: %s\n", name);
    replaceChar(name, oldChar, newChar);
}