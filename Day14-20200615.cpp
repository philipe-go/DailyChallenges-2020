#pragma region Day 14 Challenge - PRICECON
/******* DAY 14 - PRICECON - Chef and Price Control   ********
Chef has N items in his shop (numbered 1 through N); for each valid i, 
the price of the i-th item is Pi. Since Chef has very loyal customers, all N
items are guaranteed to be sold regardless of their price.
However, the government introduced a price ceiling K, which means that for 
each item i such that Pi>K, its price should be reduced from Pi to K.
Chef's revenue is the sum of prices of all the items he sells. Find the amount 
of revenue which Chef loses because of this price ceiling.

Constraints: 
    1 <= T <= 100
    1 <= N <= 10000
    1 <= Pi <= 1000 for each value of i
    1 <= K <= 1000
    Subtask #1 (100 points): original constraints
    Time limit: 1sec
    Source Limit: 50KB
*/

#include <stdio.h>
#include <vector>
#include <iostream>

int RevenueChecker(std::vector<short> rev, short k)
{
    int lostRev = 0;
    while(!rev.empty())
    {
        rev.back() < k ? lostRev : lostRev += rev.back() - k;
        rev.pop_back();
    }
    return lostRev;
}

int main(int argc, char *argv[])
{
    short t;
    int n, p, k;
    std::vector<short> rev;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        scanf("%d", &k);
        while(n--)
        {
            scanf("%d", &p);
            rev.push_back(p);
        }
            printf("%d", RevenueChecker(rev, k));
            rev.clear();
            printf("\n");
    }

    system("pause");
    return 0;
}

#pragma endregion