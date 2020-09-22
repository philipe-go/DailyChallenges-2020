#pragma region Day 5 Challenge 1 - DIFFSUM
/******* DAY 05 - DIFFSUM - Sum OR Difference ********
Write a program to take two numbers as input and print their difference if the first number
is greater than the second number otherwise print their sum.
Constraints: 
    -1000 <= N1 <= 1000
    -1000 <= N2 <= 1000
    Time Limit: 1 sec
*/

#include <stdio.h>
#include <iostream>

int main(int argc, char *argv[])
{
    int n1, n2;

    scanf("%d\n", n1);
    scanf("%d\n", n2);

    n1 > n2 ? printf("%d", n1 - n2) : printf("%d", n1 + n2);

    system("pause");
    return 0;
}
#pragma endregion

#pragma region Day 5 Challenge 2 - CUTBOARD
/******* DAY 05 - CUTBOARD - Cut the Board ********
Suzumo has a chessboard with N rows and M columns. 
In one step, he can choose two cells of the chessboard which share a common edge 
(that has not been cut yet) and cut this edge.
Formally, the chessboard is split into two or more pieces if it is possible to 
partition its cells into two non-empty subsets S1 and S2 (S1∩S2=∅, |S1|+|S2|=NM) 
such that there is no pair of cells c1,c2 (c1∈S1,c2∈S2) which share a common edge 
that has not been cut.
Suzumo does not want the board to split into two or more pieces. 
Compute the maximum number of steps he can perform while satisfying this condition.
Constraints:
    1 <= T <= 64
    1 <= N, M <= 8
    Time limit: 1 sec
    Source Limit: 50 KB
*/
#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

short Compute(short m, short n)
{
    return (m - 1) * (n - 1);
}

int main(int argc, char *argv[])
{
    short t, n, m;
    queue<short> result;

    scanf("%d", &t);
    for (t; t > 0; t--)
    {
        scanf("%d", &n);
        scanf("%d", &m);
        result.push(Compute(n, m));
    }

    while (!result.empty())
    {
        printf("%d\n", result.front());
        result.pop();
    }

    system("pause");
    return 0;
}
#pragma endregion

#pragma region Day 5 Challenge 3 - ICL1902
/******* DAY 05 - ICL1902 - FlatLand ********
In the 2-D world of Flatland, the Circles were having their sports 
day and wanted to end it with a nice formation. So, they called upon 
Mr. Sphere from Spaceland for help. Mr Sphere decides to arrange the 
Circles in square formations. He starts with N Circles and forms the 
largest possible square using these Circles. He then takes the remaining 
Circles and repeats the procedure. A square of side S requires S2
Circles to create.
Find the number of squares he will be able to form at the end of the process.
Constraints:
    1 <= T <= 1000
    1 <= N <= 1000
    Time limit: 1 sec
    Source Limit: 50 KB
*/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

short counter;

short Compute(double n)
{
    counter = 0;
    do
    {
        counter++;
        n = n - ((int) sqrt(n) * (int) sqrt(n));
    } while (n != 0);

    return counter;
}

int main(int argc, char *argv[])
{
    short t, n, it = 0;
    vector<short> result;

    scanf("%d", &t);
    for (t; t > 0; t--)
    {
        scanf("%d", &n);
        result.push_back(Compute(n));
    }

    while (it < result.size())
    {
        printf("%d\n", result[it]);
        it++;
    }

    system("pause");
    return 0;
}
#pragma endregion