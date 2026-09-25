#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int freq[26] = {0};

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    for (int i = 0; s1[i]; i++)
        freq[s1[i] - 'a']++;

    for (int i = 0; s2[i]; i++)
        freq[s2[i] - 'a']--;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}