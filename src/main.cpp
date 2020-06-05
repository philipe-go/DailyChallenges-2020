#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

short counter;

short Compute(double n)
{
    counter = 0;
    do
    {
        counter++;
        n = n - ((int) sqrt(n) * (int) sqrt(n));
    } while (n != 0);

    return counter;
}

int main(int argc, char *argv[])
{
    short t, n, it = 0;
    vector<short> result;

    scanf("%d", &t);
    for (t; t > 0; t--)
    {
        scanf("%d", &n);
        result.push_back(Compute(n));
    }

    while (it < result.size())
    {
        printf("%d\n", result[it]);
        it++;
    }

    system("pause");
    return 0;
}