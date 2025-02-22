#include <stdio.h>
/* count lines in input */
int main(void)
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++nl;
        else if (c == '\t')
            ++nl;
        else if (c == ' ')
            ++nl;
    printf("%d\n", nl);
}