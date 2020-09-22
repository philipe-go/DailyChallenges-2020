#pragma region Day 12 Challenge - CHEFSTLT
/******* DAY 12 - CHEFSTLT - Chef and Two Strings   ********
Chef has found two very old sheets of paper, each of which originally contained 
a string of lowercase Latin letters. The strings on both the sheets have equal 
lengths. However, since the sheets are very old, some letters have become unreadable.
Chef would like to estimate the difference between these strings. Let's assume that 
the first string is named S1, and the second S2. The unreadable symbols are specified 
with the question mark symbol '?'. The difference between the strings equals to the 
number of positions i, such that S1i is not equal to S2i, where S1i and S2i denote the
symbol at the i the position in S1 and S2, respectively.
Chef would like to know the minimal and the maximal difference between the two strings, 
if he changes all unreadable symbols to lowercase Latin letters. Now that you're fully 
aware of Chef's programming expertise, you might have guessed that he needs you help 
solving this problem as well. Go on, help him!

Constraints: 
    1 <= T <= 100
    1 <= mod(S1), mod(S2) <= 100
    Subtask 1 (25 points): mod(S1) = 1
    Subtask 2 (10 points): neither S1 nor S2 contains unreadable symbols
    Subtask 3 (65 points): 1 <= mod(S1), mod(S2) <= 100
    Time limit: 1sec
    Source Limit: 50KB
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string WordChecker(string s1, string s2)
{
    int min = s1.length(), max = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        switch (s1.at(i))
        {
            case '?':
            {
                min--;
                max++;
            }break;
            default:
            {
                if (s2.at(i) == '?') { min--; max++;}
                else if (s1.at(i) == s2.at(i)) min--;
                else max++;
            }
        }

    }
    return (to_string(min) + " " + to_string(max));
}

int main(int argc, char *agrv[])
{
    short t;
    string s1, s2;
    vector<string> result;

    cin >> t;
    for (t; t > 0; t--)
    {
        cin >> s1;
        cin >> s2;
        result.push_back(WordChecker(s1,s2));
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    system("pause");
    return 0;
}


#pragma endregion