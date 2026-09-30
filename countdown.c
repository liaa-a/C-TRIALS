#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main(){
    char ans ='\0';
    bool Yes = true;
    
    for (int i = 1; i <=10; i++){
        Sleep(1000);
       
        if(i == 4){
            continue;
        }
           
        printf("%d\n", i);
    }
        printf("kita mo wala ung 4?\n");
        Sleep(2000);

        printf("kase am the 1 4 u ems\n");
        Sleep(2000);

        printf("Yes or No: ");
        scanf("%c", &ans);
            if(ans == 1){
                printf("YEY");
            }
            else{
                printf(":(");
            }
        return 0;
        }
   
        
  
