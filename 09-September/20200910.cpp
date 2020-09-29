//Find the odd int

#include <vector>

int findOdd(const std::vector<int>& numbers){
  int counter = 0;
  int result;
  for (int x : numbers)
    {
    for (int y : numbers)
      {
      counter += x == y ? 1 : 0;
    }
    if (counter % 2 != 0) result = x;
    counter = 0;
  }
  return result;
}