//Valid Parentheses

public class Parentheses
{
    public static bool ValidParentheses(string input)
    {
        int cond = 0; 
        foreach (char par in input)
        {
          cond += par == '(' ? 1 : par == ')' ? -1 : 0;  
          if (cond < 0) break;
        }
        return cond == 0 ? true : false;
    }
}