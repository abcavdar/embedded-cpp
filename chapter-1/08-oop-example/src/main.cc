#define _CRTDBG_MAP_ALLOC
#include <circle.h>
#include <rectangle.h>

#include <iostream>

int main(void) {
#ifdef __GNUC__
  // GCC-specific code
  std::cout << "Build with MinGW GCC..." << std::endl;
#elif defined(_MSC_VER)
  // MSVC-specific code
  std::cout << "Build with MSVC..." << std::endl;
  _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif
  Circle c1;
  Rectangle r1;
  Circle* c2 = new Circle;

  c1.Draw();
  r1.Draw();
  c2->Draw();

  delete c2;

  return 0;
}