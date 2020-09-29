//HUman Readable Time

using System;

public static class TimeFormat
{
    public static string GetReadableTime(int seconds)
    {  
      TimeSpan t = TimeSpan.FromSeconds((float)seconds);
      return string.Format("{0:00}:{1:00}:{2:00}", (int)t.TotalHours,t.Minutes,t.Seconds);
    }
}