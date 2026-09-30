#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

  
    int roll = rand() % 100;


    if (roll < 20) {
        printf("Success! Hit the 20%% chance, sige gawin mo na katarantaduhan mo (Rolled: %d)\n", roll);
    } else {
        printf("Miss! haha wag na (Rolled: %d)\n", roll);
    }

    return 0;
}