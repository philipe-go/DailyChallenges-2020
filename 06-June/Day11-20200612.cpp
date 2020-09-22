#pragma region Day 11 Challenge - TRISQ
/******* DAY 11 - TRISQ - Fit Squares in Triangle   ********
What is the maximum number of squares of size 2x2 that can be fit
 in a right angled isosceles triangle of base B.
One side of the square must be parallel to the base of the isosceles triangle.
Base is the shortest side of the triangle
Constraints: 
    1 <= T <= 10^3
    1 <= B <= 10^4
    Time limit: 1sec
    Source Limit: 50KB
*/

#include <stdio.h>
#include <iostream>

int Triangle(int b)
{
    b % 2 != 0 ? b-- : b;
    return (b * b - 2 * b) / 8;
}

int main(int argc, char *agrv[])
{
    int t, b;

    scanf("%d", &t);
    for (t; t > 0; t--)
    {
        scanf("%d", &b);
        printf("%d\n", Triangle(b));
    }

    system("pause");
    return 0;
}

#pragma endregion