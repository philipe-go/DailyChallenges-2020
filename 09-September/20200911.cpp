//Multiples of 3 or 5

int solution(int number) 
{
  int result = 0;
  for (int i = 0; i < number; i++)
    {
    result += i % 3 == 0 ? i : i % 5 == 0 ? i : 0;
  }
return result;
}