#pragma region Day 7 Challenge - PCJ18B
/******* DAY 07 - PCJ18B - Chef and Bored Games ********
Chef has recently been playing a lot of chess in preparation for the 
ICCT (International Chef Chess Tournament).
Since putting in long hours is not an easy task, Chef's mind wanders elsewhere. 
He starts counting the number of squares with odd side length on his chessboard..
However, Chef is not satisfied. He wants to know the number of squares of odd 
side length on a generic N∗N chessboard.

Constraints: 
    1 <= T <= 100
    1 <= N <= 1000
    Time limit: 1sec
    Source Limit: 50KB
*/

#include <stdio.h>
//#include <queue>
#include <vector>
#include <iostream>

int Calcul(short n)
{
    if (n >= 1)
        return (n * n) + Calcul(n - 2);
    else
        return 0;
}

int main(int argc, char *argv[])
{
    short t, n;
    std::vector<int> output;

    scanf("%d", &t);
    for (t; t > 0; t--)
    {
        scanf("%d", &n);
        output.push_back(Calcul(n));
    }

    for (short i = 0; i < output.size(); i++)
    {
        printf("%d\n", output[i]);
    }

    system("pause");
    return 0;
}

#pragma endregion