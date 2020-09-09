#pragma region Day 16 Challenge - ADASCOOL
/******* DAY 16 - ADASCOOL - Ada School ********
Ada's classroom contains N⋅M tables distributed in a grid with N rows and M
columns. Each table is occupied by exactly one student.
Before starting the class, the teacher decided to shuffle the students a bit. 
After the shuffling, each table should be occupied by exactly one student again. 
In addition, each student should occupy a table that is adjacent to that 
student's original table, i.e. immediately to the left, right, top or bottom of
that table.
Is it possible for the students to shuffle while satisfying all conditions of 
the teacher?

Constraints: 
    1 <= T <= 5000
    2 <= N, M <= 50
    Time limit: 1sec
    Source Limit: 50KB
*/

#include <stdio.h>
#include <string>
#include <iostream>

std::string TeacherCheck(short n, short m)
{
    if (n != m) return "YES";
    else if (n % 2 != 0) return "NO";
    return "YES"; 
}

int main(int argc, char *argv[])
{
    int t = 0;
    short n = 0, m = 0;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &n, &m);
        std::cout << TeacherCheck(n, m) << std::endl;
    }

    system("pause");
    return 0;
}

#pragma endregion