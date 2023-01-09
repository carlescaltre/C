/* This code is a card counter for blackjack */

#include <stdio.h>
#include <stdlib.h>

int main () {

    char card_name[3];
    int val = 0;
    int count = 0;

    while (card_name[0] != 'X'){

        puts("Enter card name: ");
        scanf("%2s", card_name);
        
        switch (card_name[0]){
        
        case 'J':
        case 'Q':
        case 'K':
            val = 10;
            break;
        
        case 'A':
            val = 11;
            break;
        
        case 'X':
            continue;

        default:
            val = atoi(card_name);

            if ((val < 1) || (val > 10)){
                puts("I don't understand the card");
                continue;
            }
        }
        


    /* Ceck if value is between 3 and 8 and increas count*/
    if ((val > 2) && (val < 7)){
        count++;
        }
    /* Check is value is J,Q,K or 10 and lower count*/
    else if (val == 10){
        count--;
        }
    
    printf("The current count is %i\n", count);
    }   

    return 0;

}