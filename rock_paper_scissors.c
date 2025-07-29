#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, computer;
    srand(time(0));
    int play_again;
    int win = 0, draw = 0, loss = 0;

    const char *choices[] = {"Rock", "Paper", "Scissors"};

    do
    {
        computer = rand() % 3 + 1;

        printf("Enter your choice: ");
        printf("1 - Rock\n2 - Paper\n3 - Scissors\n");
        if(scanf("%d", &player) != 1 || (player > 3 || player < 1))
        {
            printf("Invalid input!! Exiting the program\n");
            break;
        }

        printf("Your choice: %s\n", choices[player - 1]);
        printf("Computer choice: %s\n", choices[computer - 1]);

        if (player == computer)
        {
            printf("It's a draw\n");
            draw++;
        }
        else if (player == 1 && computer == 3 ||
                 player == 2 && computer == 1 ||
                 player == 3 && computer == 2)
        {
            printf("You won!!\n");
            win++;
        }
        else
        {
            printf("Computer won!!\n");
            loss++;
        }

        printf("\nDo you want to play again??\n");
        printf("Enter 1 for Yes, and 0 for No\n");
        if (scanf("%d", &play_again) != 1)
        {
            printf("Invalid input!! Exiting the program\n");
            break;
        }
    }while (play_again);

    printf("\nFINAL SCORE\n");
    printf("Your wins: %d\n", win);
    printf("Computer wins: %d\n", loss);
    printf("Draws: %d\n", draw);

    return 0;
}