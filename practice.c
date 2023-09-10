#include <stdio.h>
#include <curses.h>

int main(void)
{
    char ch;
    printf("Enter a character: " );
    ch = getchar();
    printf("\n this ancii code is %d", ch);

    return 0;
}