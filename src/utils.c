#include <stdio.h>
#include <stdlib.h>
#include "../include/utils.h"

void clear_screen(void)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void print_main_menu(void)
{
    print_header("WELCOME TO VOTING SYSTEM 2024");
    printf("\n\n\t\t\t\t\t######################################################");
    printf("\n\t\t\t\t\t#                                                    #\n\t\t\t\t\t#\t1. Cast a vote                               #");
    printf("\n\t\t\t\t\t#                                                    #\n\t\t\t\t\t#\t2. View vote count (Admin only)               #");
    printf("\n\t\t\t\t\t#                                                    #\n\t\t\t\t\t#\t3. View leading candidate (Admin only)        #");
    printf("\n\t\t\t\t\t#                                                    #\n\t\t\t\t\t#\t4. Exit                                         #");
    printf("\n\t\t\t\t\t#                                                    #\n\t\t\t\t\t######################################################");
    printf("\n\n\t\t\t\t\tEnter your choice: ");
}

void print_candidate_menu(void)
{
    print_header("SELECT YOUR CANDIDATE");
    printf("\n\n\t\t\t\t\t#####################");
    printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\t1. A            #");
    printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\t2. B            #");
    printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\t3. C            #");
    printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\t4. D            #");
    printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#####################");
    printf("\n\n\t\t\tEnter your choice: ");
}

void print_error(const char *message)
{
    printf("\n\t✗ Error: %s\n\n", message);
}

void print_header(const char *text)
{
    printf("\t\t\t___##########_ %s _##########___\n", text);
}

int get_user_choice(void)
{
    int choice;
    scanf("%d", &choice);
    return choice;
}