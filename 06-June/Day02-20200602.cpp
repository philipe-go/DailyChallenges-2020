#pragma region Day 2 Challenge - Prime Intervals
/******* DAY 02 - PRINT - Prime Intervals ********
In this problem you have to print all primes from given interval.
t - the number of test cases, then t lines follows. [t <= 150]
On each line are written two integers L and U separated by a blank. L - lower bound of interval, U - upper bound of interval. [2 <= L < U <= 2147483647] [U-L <= 1000000].
Constraint: 
	time limit - 1.223s
	Source Limit - 15000B
*/
#include <stdio.h>
#include <queue>
#include <tgmath.h>

typedef long int ll;

using namespace std;

queue<ll> primes;

void PrimeNumber(ll n) //O(logn)
{
	ll i;
	for (i = 2; (i <= sqrt(n)) && (n % i != 0); i++)
	{
	}
	if (i > sqrt(n))
		primes.push(n);
}

int main()
{
	int t = 0, begin = 0, end = 0;

	scanf("%d", &t);

	for (t; t > 0; t--) //O(n^2)
	{
		scanf("%d", &begin);
		scanf("%d", &end);
		for (begin; begin <= end; begin++) //O(n)
		PrimeNumber(begin);
	}

	do //O(n)
	{
		printf("%ld\n", primes.front());
		primes.pop();
	} while (!primes.empty());
}
#pragma endregion