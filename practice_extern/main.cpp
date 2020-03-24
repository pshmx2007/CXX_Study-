#include <stdio.h>

/**
 * This is practice for using extern keywords.
 * Generally, when we need global variable, we declare variable
 * on top of the c.file
 * However, when we need global variable from other c.file
 * we need extern keyword.
*/

extern int g_x;

int main()
{
    g_x = 5;
    extern int g_y;
    printf("%d, %d\n", g_x, g_y);
    return 0;
}