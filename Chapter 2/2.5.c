// Program 2.5 Calculations with cookies
#include <stdio.h>

int main(void)
{
    int cookies = 5;
    int cookie_callory = 125;
    int total_eaten = 0;

    int eaten = 2;
    cookies -= eaten;
    total_eaten += eaten;
    printf("We have eaten %d cookies. There are %d cookies left\n", eaten, cookies);

    eaten = 3;
    cookies -= eaten;
    total_eaten += eaten;
    printf("We have eaten %d more cookies. There are %d cookies left\n", eaten, cookies);
    printf("Totally we have eaten %d cookies. We consumed %d calories", total_eaten, total_eaten * cookie_callory);
    return 0;
}