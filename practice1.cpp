/*#include <iostream>

int main()
{
    std::cout << "Hello, World!\n";
    return 0;
}*/
/*
#include <iostream>

int main()
{
  int i = 42;
  double d = 3.14;

  std::cout << "Enter an integer and a double:\n";
  std::cin >> i >> d;
  std::cout << "Your input is " << i << ", " << d << "\n";

  return 0;
}*/
#include <iostream>
#define MAX(x, y, r)  (((x) < (r) && (y) < (r))? (r):(x) > (y) ? (r)=(x):(r)=(y) )
int main()
{
int x = 60;
int y = 50;
int r = 40;
  std::cout << "Your input is " << MAX(x, y, r);
  std::cout << "Your r is " << r;

  return 0;
}