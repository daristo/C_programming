#include <stdio.h>
/* copy input to output; 1st version */
int main()
{
    int c;
    int d = getchar() != EOF;;
    c = getchar();
    if (d == 0)
    {
        printf("EOF reached\n");
        printf("%d\n", d);
    }
    while (c != EOF)
    {
        c = getchar();
        d = getchar() != EOF;
        if (d == 1)
        {
            // printf("\n");
            printf("%d\n", d);
        }
        else
        {
            printf("EOF reached\n");
            printf("%d\n", d);
        }
    }
}