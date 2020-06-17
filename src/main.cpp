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