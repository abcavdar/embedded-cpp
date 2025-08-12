#include <iostream>

int main() {
  // int a1;             // Uninitialized
  // std::cout << a1 << std::endl;

  // Scalar types
  int i = 0;
  char c = 'A';
  bool is_initialized = true;

  float f = 3.14f;
  double d = 3.1415;

  std::cout << "i: " << i << ", c: " << c
            << ", is_initialized: " << is_initialized << ", f: " << f
            << ", d: " << d << std::endl;

  // Vector types
  int arr[5];  // Uninitialized array
  int int_arr[5] = {1, 2, 3, 4, 5};

  std::cout << arr[0] << std::endl;
  std::cout << int_arr[0] << std::endl;

  // Initialization before C++11
  int a2 = 0;  // Copy initialization

  int a3(0);  // Direct initialization, but not common use for primitive types
  std::string s2("Ahmet");  // Direct initialization

  std::string s1;  // Value initialization, initialization done by calling
                   // default constructor
  // int b8 (); // Value initialization

  char c1[8];           // Unitialized
  char c2[8] = {'\0'};  // Copy initialization, Initialized with null
                        // terminating character
  char c3[8] = {'a', 'b', 'c', 'd'};  // Aggregate initialization
  char c4[8] = {"abcd"};              // Copy initialization

  std::cout << "c1:";
  for (int i = 0; i < 8; i++) {
    std::cout << " " << c1[i];
  }
  std::cout << std::endl;

  std::cout << "c2:";
  for (int i = 0; i < 8; i++) {
    std::cout << " " << c2[i];
  }
  std::cout << std::endl;

  std::cout << "c3:";
  for (int i = 0; i < 8; i++) {
    std::cout << " " << c3[i];
  }
  std::cout << std::endl;

  std::cout << "c4:";
  for (int i = 0; i < 8; i++) {
    std::cout << " " << c4[i];
  }
  std::cout << std::endl;

  // C++11 and later
  int b1{};  // Value initialization
  std::cout << "b1: " << b1 << std::endl;

  int b2{5};  // Direct initialization
  std::cout << "b2: " << b2 << std::endl;

  char e1[8]{};
  std::cout << "e1:";
  for (int i = 0; i < 8; i++) {
    std::cout << " " << e1[i];
  }
  std::cout << std::endl;

  char e2[8]{"Hello"};
  std::cout << "e2:";
  for (int i = 0; i < 8; i++) {
    std::cout << " " << e2[i];
  }
  std::cout << std::endl;

  int *p1 = new int{};
  std::cout << "*p1: " << *p1 << std::endl;

  char *p2 = new char[8]{};
  std::cout << "p2:";
  for (int i = 0; i < 8; i++) {
    std::cout << " " << *(p2 + i);
  }
  std::cout << std::endl;

  char *p3 = new char[8]{"Hello"};
  std::cout << "p3:";
  for (int i = 0; i < 8; i++) {
    std::cout << " " << *(p3 + i);
  }
  std::cout << std::endl;

  int *p4 = new int{55};
  std::cout << "*p4: " << *p4 << std::endl;

  return 0;
}
