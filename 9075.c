#include <stdio.h>
#include <windows.h> // Provides Sleep()

// Function to print text character by character, then wait before the next line
void printTypewriter(const char *text, int charDelay, int lineDelay) {
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        fflush(stdout); // Ensures each character prints immediately
        Sleep(charDelay);
    }
    printf("\n");
    Sleep(lineDelay);
}

int main() {
    printf("=== The 1975 - About You ===\n\n");

    // miss u
    printTypewriter("I know a place", 70, 800);
    printTypewriter("It's somewhere I go when I need to remember your face", 55, 1000);
    printTypewriter("We get married in our heads", 65, 900);
    printTypewriter("Something to do while we try to recall how we met", 55, 1500);

    printf("\n:((\n");
    return 0;
}