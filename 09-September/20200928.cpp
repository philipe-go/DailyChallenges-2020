//Rectangle Rotation

#include <iostream>

long long rectangle_rotation(int a, int b)
{

    return (a-1)*(b-1)+(a-2)*(b-2);
}

int main ()
{
    std::printf("%d\n",rectangle_rotation(6,4));
    system("pause");
    return 0;
}