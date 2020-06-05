#include <stdio.h>
#include <iostream>
#include <vector>

short Compute(short m, short n)
{
    return (m - 1) * (n - 1);
}

int main(int argc, char *argv[])
{
    short t, n, m;
    std::vector<short> result;

    scanf("%d", &t);
    for (t; t > 0; t--)
    {
        scanf("%d", &n);
        scanf("%d", &m);
        result.push_back(Compute(n, m));
    }

    int c = 0;
    while (c < result.size())
    {
        printf("%d%\n", result[c]);
        c++;
    }

    system("pause");
    return 0;
}