#pragma region Day 11 Challenge -  TRISQ
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
#include <string>
#include <vector>

int Triangle(int b)
{
   if ( b / 2 > 2 ) return (b - 1) * (b - 1) + Triangle (b / 2);
   return 0;  
}

int main(int argc, char *agrv[])
{
    int t, b;
    std::vector<int> result;

    scanf("%d", &t);
    for (t; t > 0; t--)
    {
        scanf("%d", &b);
        result.push_back(Triangle(b));
    }

    for (int i = 0; i < result.size(); i++)
    {
        printf("%d\n", result[i]);
    }

    system("pause");
    return 0;
}


#pragma endregion