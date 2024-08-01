#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "soundex.h"

void testSoundex() {
    char soundex[5];

    // Test basic names
    generateSoundex("Robert", soundex);
    assert(strcmp(soundex, "R163") == 0);

    generateSoundex("Rupert", soundex);
    assert(strcmp(soundex, "R163") == 0);

    generateSoundex("Rubin", soundex);
    assert(strcmp(soundex, "R150") == 0);

    // Test names with vowels
    generateSoundex("Ashcraft", soundex);
    assert(strcmp(soundex, "A261") == 0);

    generateSoundex("Tymczak", soundex);
    assert(strcmp(soundex, "T522") == 0);

    // Test names with 'h' and 'w'
    generateSoundex("Pfister", soundex);
    assert(strcmp(soundex, "P236") == 0);

    // Test short names
    generateSoundex("Li", soundex);
    assert(strcmp(soundex, "L000") == 0);

    generateSoundex("Lee", soundex);
    assert(strcmp(soundex, "L000") == 0);

    // Test empty input
    generateSoundex("", soundex);
    assert(strcmp(soundex, "") == 0);

    // Test NULL input
    generateSoundex(NULL, soundex);
    assert(strcmp(soundex, "") == 0);
}

int main() {
    testSoundex();
    printf("All tests passed!\n");
    return 0;
}
