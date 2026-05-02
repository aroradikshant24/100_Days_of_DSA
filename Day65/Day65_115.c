//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
//The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. 
//Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

#define MAX_CHAR 26

int main() {
    char s[1000], t[1000];
    int freq_s[MAX_CHAR] = {0};
    int freq_t[MAX_CHAR] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }
    for (i = 0; s[i] != '\0'; i++) {
        freq_s[s[i] - 'a']++;
        freq_t[t[i] - 'a']++;
    }
    for (i = 0; i < MAX_CHAR; i++) {
        if (freq_s[i] != freq_t[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}