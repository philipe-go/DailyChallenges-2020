#pragma region Day 8 Challenge - CHOPRT
/******* DAY 08 - CHOPRT - Chef and Operators  ********
Chef has just started Programming, he is in first year of Engineering. 
Chef is reading about Relational Operators. Relational Operators are 
operators which check relatioship between two values. Given two numerical
values A and B you need to help chef in finding the relationship between 
them that is: 
    First one is greater than second or, 
    First one is less than second or,
    First and second one are equal.
Constraints: 
    1 <= T <= 10000
    1 <= A, B <= 1000000001
    Time limit: 1sec
    Source Limit: 50KB
*/

#include <stdio.h>
#include <iostream>
#include <vector>

char Checker(int a, int b)
{
    int r = a - b;
    if (a - b > 0)
        return '>';
    else if (a - b < 0)
        return '<';
    else
        return '=';
}

int main(int argc, char *agrv[])
{
    short t;
    int a, b;
    std::vector<char> result;

    scanf("%d", &t);
    for (t; t > 0; t--)
    {
        scanf("%d %d", &a, &b);
        result.push_back(Checker(a, b));
    }

    for (int i = 0; i < result.size(); i++)
    {
        printf("%c\n", result[i]);
    }

    system("pause");
    return 0;
}

#pragma endregion