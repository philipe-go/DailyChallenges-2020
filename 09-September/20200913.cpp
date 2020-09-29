//Rot 13

#include <string>
using namespace std;

char letter(char let)
{
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  size_t index = alphabet.find(tolower(let));
  index = (index + 13 < alphabet.size()) ? index + 13 : (index + 13) - alphabet.size();
  return isupper(let) ? toupper(alphabet[index]) : alphabet[index];
}

string rot13(string msg)
{
  string output = "";
  for (char let : msg)
  {
    output += isalpha(let)? letter(let) : let;
  }
  return output;
}