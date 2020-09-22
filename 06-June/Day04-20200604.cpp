#pragma region Day 4 Challenge - 
/******* DAY 04 - DECINC - Decrement OR Increment********
Write a program to obtain a number N and increment its value 
by 1 if the number is divisible by 4 otherwise decrement its value by 1.
Constraint:
    0<=N<=1000
    Time limit = 1sec
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
int N;
scanf("%d", &N);
N=N%4==0?N+1:N-1;
printf("%d", N);
return 0;
}
#pragma endregion