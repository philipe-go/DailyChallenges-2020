//Two oldest ages

#include <vector>

std::vector<int> two_oldest_ages(std::vector<int> ages)
{   
    sort(ages.begin(),ages.end());
    return {ages[ages.size()-2], ages[ages.size()-1]};   
}