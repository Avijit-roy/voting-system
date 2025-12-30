#ifndef VOTING_H
#define VOTING_H

typedef struct
{
    int votes_a;
    int votes_b;
    int votes_c;
    int votes_d;
} VoteCount;

int cast_vote(VoteCount *votes);
void display_vote_statistics(const VoteCount *votes);
char find_leading_candidate(const VoteCount *votes);
void display_leading_board(const VoteCount *votes);

#endif