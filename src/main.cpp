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
