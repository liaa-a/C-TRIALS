#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice(){
    
    return (rand() % 3) + 1;
}
int getUserChoice(){
    int choice = 0;
   
    do{
         printf("Enter 1 or 2 or 3: ");
         scanf("%d", &choice);
    } while(choice < 1 || choice > 3);

    return choice;


}

void Winner(int UserChoice, int ComputerChoice){
    if(UserChoice == ComputerChoice){
        printf("DRAW");
    }
    else if ((UserChoice == 1 && ComputerChoice == 3) ||
            (UserChoice == 2 && ComputerChoice == 1) ||
            (UserChoice == 3 && ComputerChoice == 2)) {
                 printf("WIN");
 }
 else{
    printf("You lose");
 }
    }

int main(){
    
    srand(time(NULL));

    printf("ROCK PAPER SCISSSORS");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch(userChoice){
        case 1:
            printf("You chose rock\n");
            break;
        case 2:
            printf("You chose paper\n");
            break;
        case 3:
            printf("You chose scissor\n");
            break;
    }

    switch(computerChoice){
        case 1:
            printf("comp chose rock\n");
            break;
        case 2:
            printf("comp chose paper\n");
            break;
        case 3:
            printf("comp chose scissor\n");
            break;
    }

    Winner(userChoice, computerChoice);

    return 0;
}