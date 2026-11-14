//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".//
#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    printf("Enter the first string: ");
    scanf("%s", s);
    printf("Enter the second string: ");
    scanf("%s", t);

    // Check if the lengths are equal
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count the frequency of each character
    int count[26] = {0};
    int len = strlen(s);

    // Increment count for characters in s, decrement for characters in t
    for (int i = 0; i < len; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}