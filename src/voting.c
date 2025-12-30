#include <stdio.h>
#include <stdlib.h>
#include "../include/voting.h"
#include "../include/utils.h"

int cast_vote(VoteCount *votes)
{
    int choice;
    int menu_choice;

    while (1)
    {
        print_candidate_menu();
        choice = get_user_choice();
        clear_screen();

        switch (choice)
        {
        case 1:
            votes->votes_a++;
            printf("\n\t✓ Vote cast for candidate A\n");
            break;
        case 2:
            votes->votes_b++;
            printf("\n\t✓ Vote cast for candidate B\n");
            break;
        case 3:
            votes->votes_c++;
            printf("\n\t✓ Vote cast for candidate C\n");
            break;
        case 4:
            votes->votes_d++;
            printf("\n\t✓ Vote cast for candidate D\n");
            break;
        default:
            print_error("Invalid choice");
            continue;
        }

        printf("\n\n\t\t\t1. CAST ANOTHER VOTE\n\n\t\t\t2. HOME\n\n\t\t\tEnter your choice: ");
        scanf("%d", &menu_choice);
        clear_screen();

        if (menu_choice == 2)
        {
            return 1;
        }
    }

    return 0;
}

void display_vote_statistics(const VoteCount *votes)
{
    print_header("VOTE STATISTICS");
    printf("\n\n\t\t\t\t\t#####################");
    printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\tA  - %d      #", votes->votes_a);
    printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\tB  - %d      #", votes->votes_b);
    printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\tC  - %d      #", votes->votes_c);
    printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\tD  - %d      #", votes->votes_d);
    printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#####################\n");
}

char find_leading_candidate(const VoteCount *votes)
{
    int max_votes = votes->votes_a;
    char leading = 'A';

    if (votes->votes_b > max_votes)
    {
        max_votes = votes->votes_b;
        leading = 'B';
    }
    if (votes->votes_c > max_votes)
    {
        max_votes = votes->votes_c;
        leading = 'C';
    }
    if (votes->votes_d > max_votes)
    {
        max_votes = votes->votes_d;
        leading = 'D';
    }

    return leading;
}

void display_leading_board(const VoteCount *votes)
{
    char leading = find_leading_candidate(votes);
    print_header("LEADING BOARD");
    printf("\n\n\t\t\t\tCandidate %c is leading\n", leading);
}