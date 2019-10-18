//
//  main.c
//  CS133c_HW#2
//
//  Created by Marcus Plumley on 10/9/19.
//  Copyright © 2019 Marcus Plumley. All rights reserved.
//

#include <stdbool.h>
#include <stdio.h>

//game function to call in the main
int game(int guess_limit,int l_limit,int h_limit)
{
    bool play = true;
    bool val_found = false;
    int guess;
    
    //This block promts the P1 user for a number and stores it in the variable secret_number
    printf("Please enter a number between 1-10(inclusively)\n for P2 to guess");
    int secret_number;
    scanf("%d", &secret_number);
   
    while (play == true)
    {
        //Game loop
        while (val_found != true && guess_limit != 0)
        {
            //Get user P2 guess without input validation
            printf("Please guess a number between %d and %d. You have %d guesses left.",l_limit,h_limit,guess_limit);
            scanf("%d",&guess);
            
            if (guess == secret_number)
            {
                printf("Congragulations");
                val_found = true;
            }
            
            //This is sort of broken because no validation that the guess was lower than the lower bounds
            else if (guess < secret_number)
            {
                printf("The number you guessed was too low.\n");
                l_limit = guess + 1;
                --guess_limit;
            }
            
            //This is sort of broken because no validation that the guess was higher than the upper bounds
            else
            {
                printf("The number you guessed was too high.\n");
                h_limit = guess - 1;
                --guess_limit;
            }
        }
        
        //Play again checker
        int val;
        printf("Enter 1 if you wish to continue playing.");
        scanf("%d",&val);
        if (val != 1)
        {
            play = false;
        }
        
    }
    return 0;
}


int main() {
    
    //some values that we will use later in game loop
    int guess_limit = 5;
    int l_limit = 1;
    int h_limit = 10;
    
    game(guess_limit,l_limit, h_limit);
    
    
    return 0;
}
