//Sum Strings as Numbers

using System;
using System.Numerics;

public static class Kata
{
    public static string sumStrings(string a, string b)
    {
      if (a == null || a == "") a = "0";
      if (b == null || b == "") b = "0";
      long c, d;
      return long.TryParse(a, out c) || long.TryParse(b, out d) ? Convert.ToString(long.Parse(a) + long.Parse(b)) : Convert.ToString(BigInteger.Parse(a) + BigInteger.Parse(b));
    }
}