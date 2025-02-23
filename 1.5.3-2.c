#include <stdio.h>
/* replace blanks */
int main(void)
{
    int c, nl;
    while ((c = getchar()) != EOF)
        if (c == '\n')
        {
            c = ' ';
            putchar(c);
        }
        else if (c == '\t')
        {
            c = ' ';
            putchar(c);
        }

        else if (c == '\t')
        {
            c = ' ';
            putchar(c);
        }
        else if (c == ' ')
        {
            putchar(c);
        }
        else
        {
            putchar(c);
        }
}