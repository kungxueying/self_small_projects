#include <stdio.h>
#define PAPER 0
#define SCISSORS 1
#define ROCK 2

int main() {
    int player_choice;
    int computer_choice;
    int diff;

    while(1){    
        printf("Welcome to the game.\n");
        printf("Enter 0 if you choose paper.\n");
        printf("Enter 1 if you choose scissors.\n");
        printf("Enter 2 if you choose rock.\n");
        scanf("%d", &player_choice);
    
        while( player_choice < 0 || player_choice > 2 ){
            printf("You should enter a number between 0 and 2. Try again.\n");
            scanf("%d", &player_choice);
        }
        computer_choice = rand() % 3;
    
        switch(computer_choice){
            case 0:
                printf("Computer's choice is paper.\n");
                break;
        
            case 1:
                printf("Computer's choice is scissors.\n");
                break;
            
            case 2:
                printf("Computer's choice is rock.\n");
                break;        
        }
    
        diff = computer_choice - player_choice;
        if (diff == 0)
            printf("The result is: Draw!\n");
        else if (diff == 1 || diff == -2)
            printf("The result is: Computer wins!\n");
        else if (diff == -1 || diff == 2)
            printf("The result is: You win!\n");
        
        printf("\n\n========================================================\n\n");
    }
    return 0;
}
