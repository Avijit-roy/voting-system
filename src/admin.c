#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/admin.h"
#include "../include/utils.h"

int authenticate_admin(void)
{
    char password[MAX_PASSWORD_LEN];
    int attempts = 3;

    while (attempts > 0)
    {
        printf("\n\n\t\t\t/@/@/@Enter admin password/@/@/@/\n\n\t\t\tPassword: ");
        scanf("%49s", password);
        clear_screen();

        if (strcmp(password, ADMIN_PASSWORD) == 0)
        {
            printf("\n\t✓ Authentication successful\n\n");
            return 1;
        }
        else
        {
            attempts--;
            if (attempts > 0)
            {
                printf("\n\t✗ Wrong password. %d attempt(s) remaining\n\n", attempts);
            }
            else
            {
                print_error("Maximum attempts exceeded. Access denied.");
            }
        }
    }

    return 0;
}

int view_statistics_menu(VoteCount *votes)
{
    int choice;

    display_vote_statistics(votes);
    printf("\n\n\t\t\t1. HOME\n\n\t\t\t2. EXIT\n\n\t\t\tEnter your choice: ");
    scanf("%d", &choice);
    clear_screen();

    return choice;
}

int view_leading_menu(VoteCount *votes)
{
    int choice;

    display_leading_board(votes);
    printf("\n\n\t\t\t1. HOME\n\n\t\t\t2. EXIT\n\n\t\t\tEnter your choice: ");
    scanf("%d", &choice);
    clear_screen();

    return choice;
}