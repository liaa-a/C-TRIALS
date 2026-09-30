#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age){ //bool, gonna check the age (datatype, variable name)

    if(age >= 18){
        return true;
    }
     else{
        return false;
     }
}

int main(){

    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(ageCheck(age)){ //gonna check if true or false (the statement in the bool one)
        printf("Proceed");
    }
     else{
        printf("aint allowed bruh");
     }

     return 0;
}