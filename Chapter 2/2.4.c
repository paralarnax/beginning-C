// Program 2.4 Simple calculations
#include <stdio.h>

int main(void)
{
    int total, cats, dogs, ponies, others;

    cats = 2;
    dogs = 3;
    ponies = 5;
    others = 3;

    total = cats + dogs + ponies + others;
    printf("We have %d pets in total", total);
    return 0;
}