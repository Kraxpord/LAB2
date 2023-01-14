#include <iostream>
int main()
{
 int grn;
 std::cout << "grn - ";
 std::cin >> grn;
 int cop;
 std::cout << "cop - ";
 std::cin >> cop;
 double a;
 a = cop % 100;
 double b;
 b = (cop - a) / 100;
 grn = grn + b;
 std::cout << grn << " grn " << a << " cop";



 return 0;
}