#include <iostream>
#define PI 3.14

using namespace std;

// 3. const with References and 4. b) const Function Parameters
void display(const int& ref) {
  // ref = 20; // Error: Cannot modify a const reference
  cout << "Value: " << ref << endl;
}

// 4. a) const return value
const int getValue() { return 10; }

// 4. c) const Member Functions
class MyClass {
  int value;
  int a;
  mutable int access_count{};

 public:
  MyClass(int v) : value(v) {}
  void setValue(int v) { value = v; }  // Non-const function
  int getValue() const {
    access_count++;
    return value;
  }  // Const member function
};

int main(void) {
  // 1. const with Variables
  const float kPi{3.14f};  // x constant
  // kPi = 3.1415f; // Not allowed

  // 2. const with Pointers
  // 2. a) Pointer to const Data
  const int value{10};
  const int other{20};

  // Read from right to the left
  const int* ptr = &value;  // Pointer to const int
  // *ptr = 40;		// Not allowed
  ptr = &other;  // Reassignment

  // 2. b) const Pointer
  int value1{10};
  int other1{20};
  int* const ptr1 = &value1;  // const pointer to int
  *ptr1 = 55;
  // ptr1 = &other1;	// Reassignment not allowed

  // 2. c) const Pointer to const Data
  const int value2{10};
  const int* const ptr2 = &value2;  // Const pointer to const int
  // *ptr2 = 35;			// Dereferencing not allowed
  // ptr2 = &other;		// Reassignment not allowed

  // 3. const with References
  int a{20};
  display(a);  // const Function Parameters

  const int ret_val = getValue();  // const return value
  cout << "ret_val = " << ret_val << endl;

  return 0;
}