#include <stdio.h>

int main()
{
    int N, i, X;
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &X);
        if (X == 0)
            printf("NULL\n");
        else if (X % 2 == 0 && X > 0)
            printf("EVEN POSITIVE\n");
        else if (X % 2 == 0 && X < 0)
            printf("EVEN NEGATIVE\n");
        else if (X % 2 != 0 && X > 0)
            printf("ODD POSITIVE\n");
        else if (X % 2 != 0 && X < 0)
            printf("ODD NEGATIVE\n");
    }

    return 0;
}