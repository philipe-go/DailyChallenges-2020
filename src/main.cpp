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

    scanf("%d", &t);
    for (t; t > 0; t--)
    {
        scanf("%d", &n);
        (n > 2010 && n < 2015) ? output.push_back(0) : output.push_back(1);
    }

    for (short i = 0; i < output.size(); i++)
    {
        output[i] == 1 ? printf("\nHOSTED") : printf("\nNOT HOSTED");
    }

    system("pause");
    return 0;
}

#pragma endregion