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

    srand(time(NULL));

    n = rand() % 100;

    if (n < 33)
        computer = 'r';

    else if (n > 33 && n < 66)
        computer = 'p';

    else 
        computer = 'z'

    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

    scanf("%c", &you);

    result = game(you, computer);

    if (result == -1)
        prinf("\n\n\t\t\t\tGame Draw!\n");

    else if (result == 1) 
        ("\n\n\t\t\t\tGame Draw!\n");

    else 
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");

        printf("\t\t\t\tYOu choose : %c and Computer choose : %c\n",you, computer);

    return 0;
}