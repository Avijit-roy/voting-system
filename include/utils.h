#ifndef UTILS_H
#define UTILS_H

void clear_screen(void);
void print_main_menu(void);
void print_candidate_menu(void);
void print_error(const char *message);
void print_header(const char *text);
int get_user_choice(void);

#endif