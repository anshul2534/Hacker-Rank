#include <stdio.h>

int main()
{
    int no_of_rows, no_of_columns, no_of_supplies;
    scanf("%d %d", &no_of_rows, &no_of_columns);

    /*The idea is to place as many supplies on the intersection of a 2x2 board.
    If either m or n is odd, then after placing as many 2x2 as possible, we can cover at most 2 squares at a time of the odd row/column.
    Placing a supply on the intersection of 2 blocks on the border row, is as good as placing one at the intersection of a 2x2 square if there
    was a row/column next to it.
    Imagine the square is padded with an imaginary row or column if m or n is odd. This allows us to simply count the number of blocks of 4 squares.*/
    no_of_supplies = (no_of_rows + no_of_rows%2)*(no_of_columns + no_of_columns%2)/4;

    printf("%d\n",no_of_supplies);
    return 0;
}
