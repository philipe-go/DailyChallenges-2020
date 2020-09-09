#pragma region Day 15 Challenge 1 - FSQRT
/******* DAY 15 - FSQRT - Finding Square Roots ********
In olden days finding square roots seemed to be difficult but nowadays 
it can be easily done using in-built functions available across many languages .
Assume that you happen to hear the above words and you want to give a try in 
finding the square root of any given integer using in-built functions. 
So here's your chance. 

Constraints: 
    1 <= T <= 20
    1 <= N <= 10000
    Time limit: 1sec
    Source Limit: 50KB
*/

#include <stdio.h>
#include <math.h>
#include <iostream>

int main(int argc, char *argv[])
{
    short t;
    int n, r = 0;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        r = sqrt(n);
        printf("%d\n", r);
    }

    system("pause");
    return 0;
}

#pragma endregion

#pragma region Day 15 Challenge 2 - ZCOSCH
/******* DAY 15 - ZCOSCH - How much Scholarship ********
The ZCO Scholarship Contest has just finished, and you finish 
with a rank of R. You know that Rank 1 to Rank 50 will get 100% 
scholarship on the ZCO exam fee and Rank 51 to Rank 100 will get
50% percentage scholarship on the ZCO exam fee. The rest do not
get any scholarship.
What percentage of scholarship will you get ?

Constraints: 
    1 <= R <= 10^9
    Time limit: 1sec
    Source Limit: 50KB
*/

#include <stdio.h>
#include <iostream>

int main(int argc, char *argv[])
{
    long r;

    scanf("%d", &r);
    r <= 50 ? printf("100") : r <= 100 ? printf("50") : printf("0"); 

    system("pause");
    return 0;
}

#pragma endregion