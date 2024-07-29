#include <iostream>
int main()
{
    int a = 1;
    int b = 2;
    int tmp =a;
    a=b;
    b=tmp;
    std::cout <<a;
    return 0;
}