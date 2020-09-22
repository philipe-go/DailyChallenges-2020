#include <string>
#include <cstring>
#include <iostream>

std::string format_duration(int seconds) 
{
  int years, days,hours, minutes, second;
  std::string output = "";
  bool doFirst = true;
  std::string temp;

  if (seconds == 0) output = "now";
  else 
  {
    years = seconds>=31556952? (seconds/60/60/24/365) : 0;
    days = seconds>=86400? (seconds/60/60/24)%365 : 0;
    hours = seconds>=3600? ((seconds/60)/60)%24 : 0;
    minutes = seconds>=60? (seconds/60)%60 : 0; 
    second = seconds % 60;
  
    output += years > 1 ? ":"+std::to_string(years)+" years" : years == 1 ? ":"+std::to_string(years)+" year" : "";
    output += days > 1 ? ":"+std::to_string(days)+" days" : days == 1 ? ":"+std::to_string(days)+" day" : "";
    output += hours > 1 ? ":"+std::to_string(hours)+" hours" : hours == 1 ? ":"+std::to_string(hours)+" hour" : "";
    output += minutes > 1 ? ":"+std::to_string(minutes)+" minutes" : minutes == 1 ? ":"+std::to_string(minutes)+" minute" : "";
    output += second > 1 ? ":"+std::to_string(second)+" seconds" : second == 1 ? ":"+std::to_string(second)+" second" : "";

    std::string::iterator it=output.end();
    while (it != output.begin())
    {
        if (*it == ':') 
        {
          if (it != output.begin()) { temp += (doFirst)? " dna " : " ,"; doFirst = false; }
          else temp+="";
        }
        else temp += *it;
        it--;
    } 
    output ="";
    for (int i = temp.length() - 1; i >=0; i--)
    {
        output+=temp[i];
    }       
  }
  
  return output;
}

int main()
{
    std::cout << format_duration(3662);
    system("pause");
    return 0;
}