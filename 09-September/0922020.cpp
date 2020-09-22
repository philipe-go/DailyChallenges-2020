#include <cmath>

bool isPrime(int num)
{
    switch (num)
    {
    case 0:
        return false;
        break;
    case 1:
        return true;
        break;
    default:
    {
        for (int i = 2; i <= sqrt(num) && (num % i != 0); i++)
        {
            if (i > sqrt(num))
                return true;
        }
    }
    }
    return false;
}

int main()
{
    isPrime(5);
    system("pause");

    return 0;
}