#pragma region Day 10 Challenge - LUCKFOUR

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

int Checker(long a)
{
    std::string s = std::to_string(a);
    int res = 0;
    for (int it = 0; it < s.length(); it++)
    {
        s[it] == '4' ? res ++ : res;
    }
    return res;
}

int main(int argc, char *agrv[])
{
    int t;
    long n;
    std::vector<int> result;

    scanf("%d", &t);
    for (t; t > 0; t--)
    {
        scanf("%d", &n);
        result.push_back(Checker(n));
    }

    for (int i = 0; i < result.size(); i++)
    {
        printf("%d\n", result[i]);
    }

    system("pause");
    return 0;
}

#pragma endregion