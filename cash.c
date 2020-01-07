/*
Take a float for change and returns the minimum number of coins
*/

#include <stdio.h>
#include <cs50.h>

int main()
{
    float dollars = 0.0;
    
    do
    {
        dollars = get_float("Change owed: ");
    } while(dollars >= 1 || dollars <= 0);
    
    int cents = dollars * 100;
    int coins = 0;
    
    if (cents >= 25)
    { 
        do
        {
            cents-=25;
            coins++;
        } while (cents >= 25);
    }
       
    if (cents >= 10)
    {
        do
        {
            cents-=10;
            coins++;
        } while (cents >= 10);
    }
    
    if (cents >= 5)
    {
        do
        {
            cents-=5;
            coins++;
        } while (cents >= 5);
    }
    
    if (cents >= 1)
    {
        do
        {
            cents-=1;
            coins++;
        } while (cents >= 1);
    }
    printf("%u\n", coins);
}

