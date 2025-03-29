#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
int main(void)
{

    int c, prev, previous;
    // state = OUT;
    previous = 0;
    prev = (previous != ' ' || previous != '\n' || previous != '\t');
    // printf("%d",prev);
    while ((c = getchar()) != EOF)
    {

        if (c == ' ' || c == '\n' || c == '\t')
        {
            printf("\n");
            //printf("Empty! ");
            
        }
        else
        {
            //printf("Not empty! ");
            putchar(c);
        }
        previous = c;
    }
}
