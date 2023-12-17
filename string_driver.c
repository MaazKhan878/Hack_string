#include <stdio.h>
#include <string.h>
#include "string_utils.h"
int main(){
    // string replace oldchar by newchar through a function
    char name[] = "MazzKhan";
    char oldChar = 'z';
    char newChar = 'a';
    printf("1: old String: %s\n", name);
    replaceChar(name, oldChar, newChar);
    printf("1: New string: %s\n", name);
    
    // String copy to another string and replace with new charater if there a old character
    char oldChar1 = 'a';
    char newChar1 = 'z';
    printf("2: Old string: %s\n",name);
    char *newString = replaceCharCopy(name, oldChar1, newChar1);
    if(newString != NULL){
        printf("2: Copy string with New character: %s\n",newString);
    }   
}