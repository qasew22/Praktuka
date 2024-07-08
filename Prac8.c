#include <stdio.h>
#include <string.h>
#include <ctype.h>

unsigned long long calculate_factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * calculate_factorial(n - 1);
}

int main() {
    char input_word[15];
    int letter_frequency[26] = { 0 };
    unsigned long long total_anagrams = 0;

    printf("Enter a word: ");
    scanf("%s", input_word);

    for (int i = 0; input_word[i]; i++) {
        input_word[i] = tolower(input_word[i]);
    }

    int word_length = strlen(input_word);

    for (int i = 0; i < word_length; i++) {
        letter_frequency[input_word[i] - 'a']++;
    }

    total_anagrams = calculate_factorial(word_length);

    for (int i = 0; i < 26; i++) {
        if (letter_frequency[i] > 1) {
            total_anagrams /= calculate_factorial(letter_frequency[i]);
        }
    }

    printf("Number of anagrams: %llu\n", total_anagrams);

    return 0;
}
