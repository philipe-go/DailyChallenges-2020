#include <stdio.h>
#include <iostream>

int main(int argc, char *agrv[])
{
    short t, a, b;

    scanf("%d%", &t);
    for (t; t > 0; t--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a%b);
    }

    system("pause");
    return 0;
}