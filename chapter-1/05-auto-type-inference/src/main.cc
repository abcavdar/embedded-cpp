#include <iostream>
#include <vector>

int main() {
  // auto usage
  auto x = 42;          // Deduces int
  auto pi = 3.14;       // Deduces double
  auto name = "Ahmet";  // Deduces const char*

  std::vector<int> numbers = {1, 2, 3};
  auto it = numbers.begin();  // Deduces std::vector<int>::iterator

  std::cout << "x: " << x << ", pi: " << pi << ", name: " << name << std::endl;

  // decltype usage
  int a = 5;
  decltype(a) b = 10;  // b is of type int

  const int k = 20;
  decltype(k) y = k;  // y is const int

  auto z = k;  // z is int (const is not deduced by auto)

  std::cout << "a: " << a << ", b: " << b << ", y: " << y << ", z: " << z
            << std::endl;

  return 0;
}
