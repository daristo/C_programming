#include <stdio.h>
/* replace blanks */
int main(void)
{
    int c, current, previous = 0;
    while ((c = getchar()) != EOF)
    {
        current = c == ' ' || c == '\t' || c == '\n';
        if (!previous || !current) {
            putchar(c);
        }
        previous = current;
    }
}