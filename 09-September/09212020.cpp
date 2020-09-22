#include <iostream>
#include <string>
#include <algorithm>

#define LONG unsigned long long

std::string conv_str(std::string numA, std::string numC)
{
    std::string output = "";
    int carry = 0;
    LONG indexDiff = ((LONG)numA.size() - (LONG)numC.size());
    std::string numB = indexDiff >= 0 ? std::string((indexDiff), '0').append(numC) :
                    std::string((indexDiff)*(-1), '0').append(numA);
    for (int i = numA.size() - 1; i >= 0; i--)
    {
        LONG sum = (LONG)(numA[i] - '0') + (LONG)(numB[i] - '0') + carry;
        output += (sum < 10) ? std::to_string((sum)) : std::to_string((sum - 10));
        carry = ((int)(numA[i] - '0') + (int)(numB[i] - '0') + carry < 10) ? 0 : 1;
    }
    if(carry!=0) output+=std::to_string(carry);
    reverse(output.begin(),output.end());
    return output;
}

std::string sum_strings(const std::string &a, const std::string &b)
{
    return conv_str(a, b);
}

int main()
{
    std::string checker = sum_strings("50", "51");
    std::cout << checker;
    return 0;
}