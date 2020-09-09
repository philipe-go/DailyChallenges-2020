#pragma region Day 6 Challenge - SNCKYEAR
/******* DAY 06 - SNCKYEAR - Chef and SnackDown ********
Chef is interested in the history of SnackDown contests. He needs a 
program to verify if SnackDown was hosted in a given year.
SnackDown was hosted by CodeChef in the following years: 
2010, 2015, 2016, 2017 and 2019.

Constraints: 
    1 <= T <= 10
    2010 <= N <= 2019
    Time limit: 0.5sec
    Source Limit: 50KB
*/

#include <stdio.h>
//#include <queue>
#include <vector>
#include <iostream>

int main(int argc, char *argv[])
{
    short t, n;
    std::vector<short> output;
    short years[] = {2010, 2015, 2016, 2017, 2019};

    scanf("%d", &t);
    for (t; t > 0; t--)
    {
        scanf("%d", &n);
        short result = 0;
        for (int it = 0; it < sizeof(years) / sizeof(short); it++)
        {
            if (n == years[it])
            {
                result = 1;
                break;
            }
        }
        output.push_back(result);
    }

    for (short i = 0; i < output.size(); i++)
    {
        output[i] == 1 ? printf("HOSTED\n") : printf("NOT HOSTED\n");
    }

    system("pause");
    return 0;
}

#pragma endregion