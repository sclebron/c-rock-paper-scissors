#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer)
{
    if (you == computer)
        return -1;

    if (you == 's' && computer == 'p')
        return 0;

    else if (you == 'p' && copmuter == 's') return 1;
    
    if (you == 's' && computer == 'r')
        return 1

    else if (you == 'r' && copmuter == 's')
        return 0;

    if (you == 'p' && computer == 'r')
        return 0;

    else if (you == 'r' && computer == 'p')
        return 1;
}

int main()
{
    int n;

    char you, computer, result;
}