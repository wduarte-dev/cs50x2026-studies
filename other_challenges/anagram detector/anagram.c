/* 
Your mission is to create a C function that takes two strings and returns 1 (true) if they are anagrams (i.e., if they contain exactly the same letters, in the same quantities, but in a different order) or 0 (false) otherwise. 

Examples (in PT-BR / EN): 
PTBR  "roma" and "amor" ->  Is an Anagram (1); 
EN    "listen" and "silent" -> Is an Anagram (1); 
PTBR  "casa" and "saco" -> NOT an Anagram (0) ("saco" contains 'o' and "casa" not, letters are missing); 
PTBR  "gato" and "gatos" -> NOT an Anagram (0) (different lengths);
EN    "soon" and "son" -> NOT an Anagram (0) (different lengths);
EN    "stale" and "steal" -> Is an Anagram (1).

C Requirements and Tips: 
----- Case-insensitive: 'A' and 'a', for example, must be treated as the same letter. (Tip: you can use the ASCII table by adding/subtracting the difference or use the `tolower()` function from the `<ctype.h>` library). 
----- Ignore space checking for now (assume single words).
----- Consider maximum of 30 bytes in each array.
----- The input is > "word1 word2" (one space between), the output is an integer, 0 or 1.
*/

#include <stdio.h>

void lower(char array[], int array_len);
int is_anagram(char array1[], char array2[]);

int main(void) {
    char word1[30];
    char word2[30];
    scanf("%29s %29s", word1, word2);
    lower(word1, 30);
    lower(word2, 30);
    int anagram = is_anagram(word1, word2);
    printf("%d\n", anagram);
    return 0;
}

void lower(char array[], int array_len) {
    // The difference between lower and upper letters in ASCII is 32, you can sum directly
    for (int i = 0 ; i < array_len; i++) {
        if (array[i] == '\0' || array[i] == '\n') {
            break;
        }
        if (array[i] >= 65 && array[i] <= 90) {
            array[i] += 32;
        }
    }
}

int len(char array[]) {
    int lenght = 0;
    for (int i = 0; array[i] != '\0'; i++) {
        lenght += 1;
    }
    return lenght;
}

int is_anagram(char array1[], char array2[]) {
    int table[26] = {0}; // Put 0 in all indexes.
    if (len(array1) != len(array2)) {
        return 0;
    }
    for (int i = 0 ; array1[i] != '\0'; i++) {
        table[array1[i] - 'a']++;
        table[array2[i] - 'a']--;
    }
    for (int j = 0 ; j < 26 ; j++) {
        if (table[j] != 0) {
            return 0;
        }
    }
    return 1;
}

/* 
------Trashed due to sum colision
int ascii_sum(char array[], int array_len) {
    // Sum directly, if the same, is an anagram, even if the order isnt equal
    int sum = 0;
    for (int i = 0 ; i < array_len; i++) {
        if (array[i] == '\0' || array[i] == '\n') {
            break;
        }
        sum += array[i];
    }
    return sum;
}
*/

