//Is prime number?

#include <cmath>

bool checker(int num)
{
  long long i;
    switch (num)
    {
      case 1:
        {return false;} break;
      default:
      {
        for (i = 2; i <= sqrt(num) && (num % i != 0); i++) {}
      }break;
    }
  return i > sqrt(num) ? true : false;
}

bool isPrime(int num) {
  return num <= 0 ? false : checker(num);
