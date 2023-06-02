/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int snakewatergun(char you, char comp)
{
    // condition for draw ( ss , ww , gg)
    if(you == comp)
    {
        return 0;
    }
    
    // conditions for non-draw (sg-gs , sw-ws , gw-wg)
    if(you == 's' && comp == 'g')
    {
        return 1; 
    }
    else if(you == 'g' && comp == 's')
    {
        return -1;
    }
    
    if(you == 's' && comp == 'w')
    {
        return 1; 
    }
    else if(you == 'w' && comp == 's')
    {
        return -1;
    }
    
    if(you == 'g' && comp == 'w')
    {
        return 1; 
    }
    else if(you == 'w' && comp == 'g')
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int num = rand()%100 + 1;       // random number from 1-100
    
    // classifiying random no. range in 3 parts for s w and g
    if(num < 33)
    {
        comp = 's';
    }
    else if(num>33 && num<66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("comp chooses - %c\n", comp);  //  depends on you, if u want to display this
    
    printf("enter 's' for snake, 'g' for gun and 'w' for water - \n");
    scanf("%c", &you);
    
    int result = snakewatergun(you, comp);      // function call
    printf("you choose %c and comp choose %c \n", you, comp);
    
    if(result == 0)
    {
        printf("its a draw !! ");
    }
    else if(result == 1)
    {
        printf("you won !!");
    }
    else
    {
        printf("comp won !!");
    }
    return 0;
}


    
    
