#include <stdio.h>

int main()
{
    int X;
    float Y;

    scanf("%d%f", &X, &Y);

    printf("%.3fkm/1\n", X / Y);

    return 0;
}