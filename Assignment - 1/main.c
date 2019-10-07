//
//  main.c
//  CS133c_HW#1
//
//  Created by Marcus Plumley on 10/7/19.
//  Copyright © 2019 Marcus Plumley. All rights reserved.
//

#include <stdio.h>

int main()
{
    int integer;
    char character;
    short muggsy;
    long great_wall;
    float kirby;
    double sonic;
    
    
    integer = -12;
    character = 'Q';
    muggsy = 53;
    great_wall = 69541273;
    kirby = .1;
    sonic = 584324.238;
    
    
    printf("The integer is: %d\n",integer);
    printf("The character is: %c\n",character);
    printf("The short is: %hd\n",muggsy);
    printf("The long is: %ld\n",great_wall);
    printf("The float is: %f\n",kirby);
    printf("The double is: %f\n",sonic);
    

    
    return 0;
}
