#ifndef ADMIN_H
#define ADMIN_H

#include "voting.h"

#define ADMIN_PASSWORD "shadow"
#define MAX_PASSWORD_LEN 50

int authenticate_admin(void);
int view_statistics_menu(VoteCount *votes);
int view_leading_menu(VoteCount *votes);

#endif