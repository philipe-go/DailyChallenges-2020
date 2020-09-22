#pragma region Day 13 Challenge - FLOW002
/******* DAY 13 - FLOW002 - Find Remainder   ********
Write a program to find the remainder when an integer A is divided by an integer B.

Constraints: 
    1 <= T <= 1000
    1 <= A, B <= 10000
    Time limit: 1sec
    Source Limit: 50KB
*/

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


#pragma endregion