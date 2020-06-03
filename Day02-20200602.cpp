#pragma region Day 2 Challenge - Prime Intervals
/******* DAY 02 - PRINT - Prime Intervals ********
In this problem you have to print all primes from given interval.
t - the number of test cases, then t lines follows. [t <= 150]
On each line are written two integers L and U separated by a blank. L - lower bound of interval, U - upper bound of interval. [2 <= L < U <= 2147483647] [U-L <= 1000000].
Constraint: 
	time limit - 1.223s
	Source Limit - 15000B
*/
#include <iostream>
#include <string>
#include <queue>
#include <tgmath.h>
#include <vector>

typedef long int ll;

using namespace std;

queue<ll> primes;

void PrimeNumber(ll n) //O(logn)
{
	ll i;
	for (i = 2; (i <= sqrt(n)) && (n % i != 0); i++)
	{ }
	if (i > sqrt(n))
		primes.push(n);
}

void Split(string st) //O(n)
{
	string temp = "";
	char* ptr = &st[0];
	vector<int> interval;

	do //O(n)
	{
		if (*ptr != ' ')
			temp = temp + *ptr;
		else
		{
			interval.push_back(stoi(temp));
			temp = "";
		}

		ptr = ptr + 1;

	} while (*ptr != '\0');

	interval.push_back(stoi(temp));

	for (int i = interval[0]; i <= interval.back(); i++)
		PrimeNumber(i);
}

int main(int argc, char* argv[])
{
	int t; //number of test cases
	string input;
	

	cin >> t;
	cin.ignore();

	for (t; t > 0; t--) //O(n)
	{
		getline(cin, input);
		Split(input);
	}

	do //O(n)
	{
		cout << primes.front() << endl;
		primes.pop();
	} while (!primes.empty());
}
#pragma endregion