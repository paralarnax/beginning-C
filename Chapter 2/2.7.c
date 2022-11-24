// Program 2.7 Division with float values
#include <stdio.h>

int main(void)
{
    float plank_lenght = 10.0f;
    float piece_count = 4.0f;
    float piece_lenght = 0.0f;

    piece_lenght = plank_lenght / piece_count;

    printf("A plank %.2f feet long can be cut into %.0f pieces %.2f feet long.", plank_lenght, piece_count, piece_lenght);
    // %.2f expression prints float with two decimal places
    // %.0f expression prints float with zero decimal places
    return 0;
}