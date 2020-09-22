#include <string>

std::string format_duration(int seconds) {
  int years, days,hours, minutes, second;
  std::string output = "";
  
  if (seconds == 0) output = "now";
  else 
  {
    years = seconds>=31556952? (seconds/60/60/24/365) : 0;
    days = seconds>=86400? (seconds/60/60/24)%365 : 0;
    hours = seconds>=3600? ((seconds/60)/60)%24 : 0;
    minutes = seconds>=60? (seconds/60)%60 : 0; 
    second = seconds % 60;
  
    output += years > 1 ? std::to_string(years)+" years" : years == 1 ? std::to_string(years)+" year" : "";
    if (years!=0) output += seconds!=0? ", " : minutes!=0?", ":hours!=0?", ":days!=0?", ":", ":", ":" and ":"";
    output += days > 1 ? std::to_string(days)+" days," : days == 1 ? std::to_string(days)+" day," : "";
    if (days!=0) output += seconds!=0? ", " : minutes!=0?", ":hours!=0?", ":days!=0?", ":", ":", ":" and ":"";
    output += hours > 1 ? std::to_string(hours)+" hours," : hours == 1 ? std::to_string(hours)+" hour," : "";
    if (hours!=0) output += seconds!=0? ", " : minutes!=0?", ":hours!=0?", ":days!=0?", ":", ":", ":" and ":"";
    
    output += minutes > 1 ? std::to_string(minutes)+" minutes," : minutes == 1 ? std::to_string(minutes)+" minute," : "";
    output += seconds > 60 ? " and " : "";   
    output += second > 1 ? std::to_string(second)+" seconds" : second == 1 ? std::to_string(second)+" second" : "";
  }
  return output;
}

int main()
{
  format_duration(3662);
  
  system("pause");
  return 0;
}

