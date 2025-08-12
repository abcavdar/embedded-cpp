#include <iostream>
#define ELEMENT_SIZE 6

using namespace std;

void Increment(int& a) { a++; }

int main() {
  int x = 2000000000;
  int y = 20;
  int& ref = x;
  int* ptr = &y;  // Pointer declaration: Pointer points to the address of x,
                  // which is created on the stack
  int* ptr2 = nullptr;     // NULL
  int* ptr3 = new int{5};  // Pointer declaration: Pointer points to the address
                           // of newly allocated memory on the heap
  // void pointer declaration
  void* void_ptr = new double{3.14};  // C alternative: malloc(size_t)
  int** ptr4 = &ptr3;                 // Pointer to pointer to int
  int*** ptr6 = &ptr4;                // Pointer to pointer to pointer to int

  std::cout << "ptr value: " << *ptr << std::endl;  // *ptr: Dereferencing
  ptr = ptr3;                                       // Reassignment
  ptr3 = &x;                                        // Reassignment

  std::cout << "Address of x: " << &x << " Value of x: " << x
            << " Address of ref: " << &ref << " Value of ref: " << ref
            << std::endl;
  std::cout << "Address of y: " << &y << " Value of y: " << y << std::endl;
  ref = y;
  std::cout << "Address of x: " << &x << " Value of x: " << x
            << " Address of ref: " << &ref << " Value of ref: " << ref
            << std::endl;

  std::cout << "ptr value after reassignment: " << *ptr << std::endl;
  std::cout << "ptr3 value after reassignment: " << *ptr3 << std::endl;
  std::cout << "Value of void ptr: " << *((double*)void_ptr)
            << std::endl;  // Void pointers must be casted before dereferencing

  int* int_ptr = new int[ELEMENT_SIZE]{1, 2, 3, 4, 5, 6};
  int my_arr[ELEMENT_SIZE]{};
  int* my_arr_ptr = my_arr;

  for (int i = 0; i < ELEMENT_SIZE; i++) {
    std::cout << "Element " << i << ": " << my_arr[i]
              << " Element's address: " << &(my_arr[i]) << std::endl;
    std::cout << "Element " << i << ": " << *my_arr_ptr
              << " Element's address: " << my_arr_ptr << std::endl;
    my_arr_ptr++;
  }
  std::cout << "my_arr address: " << &my_arr
            << " my_arr_ptr address: " << my_arr_ptr << std::endl
            << std::endl
            << std::endl;

  int* head = int_ptr;
  for (int i = 1; i <= ELEMENT_SIZE; i++) {
    std::cout << "Element " << i << ": " << *int_ptr
              << " Element's address: " << int_ptr << std::endl;
    int_ptr++;  // int_ptr = int_ptr + 1;
  }

  int_ptr = int_ptr - ELEMENT_SIZE;
  std::cout << "Size of int: " << sizeof(int) << std::endl;
  // int_ptr = int_ptr - 7;
  // for (int i = 0; i < ELEMENT_SIZE; i++) {
  //     // std::cout << "Element " << i << ": " << *int_ptr << " Element's
  //     address: " << int_ptr << std::endl; int_ptr--; // int_ptr = int_ptr +
  //     1;
  // }
  std::cout << "The first element of my int array: " << *int_ptr
            << " Address: " << int_ptr << std::endl;
  std::cout << "The first element of my int array: " << *head
            << " Address: " << head << std::endl;

  ref++;
  cout << "Value of ref after ref++: " << ref << endl;
  Increment(ref);
  cout << "Value of ref after increment " << *ptr << endl;

  // std::cout << "Ptr2 value: " << *ptr2 << std::endl; // Read access
  // violation! Segmentation fault!

  // Check against null
  if (ptr2 != nullptr) {
    cout << "Value of the variable that ptr2 points: " << *ptr2 << endl;
  }
  if (ptr3 != nullptr) {
    cout << "Value of ptr3: " << ptr3 << endl;
    cout << "Address of ptr3: " << &ptr3 << endl;
    cout << "Value of the variable that ptr3 points: " << *ptr3 << endl;
  }
  if (ptr4 != nullptr) {
    cout << "Value of ptr4: " << ptr4 << endl;
    cout << "ptr4 1 dereferencing: " << *ptr4 << endl;
    cout << "Value 2 dereferencing: " << **ptr4 << endl;
  }

  delete ptr;  // C alternative: free(ptr3);
  delete void_ptr;
  delete[] int_ptr;  // delete[] head;

  return 0;
}
