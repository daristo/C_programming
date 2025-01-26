#include <stdio.h>
/* copy input to output; 1st version */
int main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
        int d = getchar() != EOF;
        if(d == 1)
        {
            printf("\n");
            printf("%d\n",d);
        }
        else
        {
            printf("EOF reached\n");
            printf("%d\n",d);
        }
    }
}