#pragma region Day 1 challenge - Prime Generator
/******* DAY 01 - PRIME1 - Prime Generator ********
 * Peter wants to generate some prime numbers for his cryptosystem.
 * Help him! Your task is to generate all prime numbers between two given numbers!
*/

#include <iostream>
#include <string>
#include <queue>
#include <tgmath.h>

typedef long long ll;

using namespace std;

bool PrimeNumber(ll n) //O(logn)
{
	if (n == 1)
	{
		return 0;
	}
	
	ll i;
	for (i = 2; (i <= sqrt(n)) && (n % i != 0); i++)
	{ }
	if (i > sqrt(n))
		return 1;
	else
		return 0;
}

void Split(string st, queue<ll>& q) //O(n)
{
	string temp = "";
	char* ptr = &st[0];

	do 
	{
		if (*ptr != ' ')
			temp = temp + *ptr;
		else
		{
			q.push(stoi(temp));
			temp = "";
		}

		ptr = ptr + 1;

	} while (*ptr != '\0');

	q.push(stoi(temp));
}

int main(int argc, char* argv[])
{
	int t; //number of test cases
	queue<ll> intervals;
	string input;

	cin >> t;
	cin.ignore();

	for (t; t > 0; t--) //O(n)
	{
		getline(cin, input);
		Split(input, intervals);
	}

	cout << endl;

	do //O(n)
	{
		ll a = intervals.front();
		intervals.pop();
		ll b = intervals.front();
		intervals.pop();

		for (a; a <= b; a++) //O(n)
		{
			if (PrimeNumber(a))
				cout << a << endl;
		}
		cout << endl;
	} while (!intervals.empty());
}
#pragma endregion