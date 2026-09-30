#include <stdio.h>
#include <stdbool.h>
// provide compiler with information about a function's:
// name, return type, and parameter before its actual definition
// enables type checking and allows functions to be used before they are defined
// improves readability, organization, and helps prevent errors
void hello(char name[], int age); //function prototype
bool ageCheck (int age);

int main() {
    char name[50];
    int age;

    printf("Enter name n age: ");
    scanf("%s %d", name, &age);

    hello(name, age);
     if(ageCheck(age)){
        printf("u can continue");
     }
     else{
        printf("You not old enough");
     }
    return 0;
}

void hello(char name[], int age){
    printf("You are %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck (int age){
    return age >= 16; // true or false tapos basta babalik sha as true sa boolean logic
}