#pragma region Day 9 Challenge - MATCHES
/******* DAY 09 - MATCHES - Playing with Matches  ********
Chef's son Chefu found some matches in the kitchen and he immediately 
starting playing with them.
The first thing Chefu wanted to do was to calculate the result of his 
homework — the sum of A and B, and write it using matches. Help Chefu 
and tell him the number of matches needed to write the result.
Constraints: 
    1 <= T <= 1000
    1 <= A, B <= 1000000
    Time limit: 1sec
    Source Limit: 50KB
*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

int Checker(int a, int b)
{
    std::string s = std::to_string(a + b);
    int res = 0;
    for (int it = 0; it < s.length(); it++)
    {
        switch (s[it])
        {
        case '8':
            res += 7;
            break;
        case '1':
            res += 2;
            break;
        case '4':
            res += 4;
            break;
        case '7':
            res += 3;
            break;
        default:
        {
            if (s[it] == '2' || s[it] == '3' || s[it] == '5')
                res += 5;
            else
                res += 6;
        }
        break;
        }
    }
    return res;
}

int main(int argc, char *agrv[])
{
    short t;
    int a, b;
    std::vector<int> result;

    scanf("%d", &t);
    for (t; t > 0; t--)
    {
        scanf("%d %d", &a, &b);
        result.push_back(Checker(a, b));
    }

    for (int i = 0; i < result.size(); i++)
    {
        printf("%d\n", result[i]);
    }

    system("pause");
    return 0;
}

#pragma endregion