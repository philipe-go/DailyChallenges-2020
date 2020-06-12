#pragma region Day 10 Challenge - LUCKFOUR 
/******* DAY 10 - LUCKFOUR - Lucky Four   ********
Kostya likes the number 4 much. Of course! This number has such a lot of properties, like:
    Four is the smallest composite number;
    It is also the smallest Smith number;
    The smallest non-cyclic group has four elements;
    Four is the maximal degree of the equation that can be solved in radicals;
    There is four-color theorem that states that any map can be colored in no more than four colors 
        in such a way that no two adjacent regions are colored in the same color;
    Lagrange's four-square theorem states that every positive integer can be written as the sum of 
        at most four square numbers;
    Four is the maximum number of dimensions of a real division algebra;
    In bases 6 and 12, 4 is a 1-automorphic number;
    And there are a lot more cool stuff about this number!
Impressed by the power of this number, Kostya has begun to look for occurrences of four anywhere. 
He has a list of T integers, for each of them he wants to calculate the number of occurrences of 
the digit 4 in the decimal representation. He is too busy now, so please help him.
Constraints: 
    1 <= T <= 10^5
    Subtask 1: 0 <= from the lsit <= 9 - 33pts
    Subtask 2: 0 <= from the lsit <= 10^9 - 67pts
    Time limit: 1sec
    Source Limit: 50KB
*/

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