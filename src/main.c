#include <stdio.h>
#include <stdlib.h>
#include "../include/voting.h"
#include "../include/admin.h"
#include "../include/utils.h"

int main(void)
{
    VoteCount votes = {0, 0, 0, 0};
    int choice;

    while (1)
    {
        print_main_menu();
        choice = get_user_choice();
        clear_screen();

        switch (choice)
        {
        case 1:
            cast_vote(&votes);
            break;

        case 2:
            if (authenticate_admin())
            {
                view_statistics_menu(&votes);
            }
            break;

        case 3:
            if (authenticate_admin())
            {
                view_leading_menu(&votes);
            }
            break;

        case 4:
            printf("\n\n\t\t\t_#_#_#_THANKS FOR VOTING_#_#_#_\n\n");
            return 0;

        default:
            clear_screen();
            print_error("Invalid choice. Please try again");
            break;
        }
    }

    return 0;
}