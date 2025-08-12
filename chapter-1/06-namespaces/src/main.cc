#include <a.h>
#include <b.h>
#include <m.h>

#include <iostream>

// using namespace std;
// using LibraryA::printMessage;

int main() {
  LibraryA::printMessage();  // Calls LibraryA::printMessage()
  LibraryB::printMessage();  // Calls LibraryB::printMessage()
  std::cout << "Addition: " << LibraryA::math::Add(20, 30) << std::endl;
  // printMessage();

  return 0;
}
