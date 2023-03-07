#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: 2D array representing the chessboard
 * The function prints the chessboard with pieces represented by characters.
 * It takes a 2D array of chars as input, representing the chessboard.
 * Each element in the array represents a square on the board.
 * If the element is not a valid character, a blank space is printed.
 * After each row is printed, a newline character is added.
 * Return: void
*/
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
if ((a[i][j] >= 'a' && a[i][j] <= 'z') || (a[i][j] >= 'A' && a[i][j] <= 'Z'))
{
_putchar(a[i][j]);

}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}

