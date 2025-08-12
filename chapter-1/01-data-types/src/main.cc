#include <iostream>
#include <limits>
using namespace std;

int main() {
  cout << "Primitive Type\t\t\tSize\t\t\tMin. Value\t\t\t\tMax. Value" << endl;
  cout << "===================================================================="
       << "===========================================" << endl;
  cout << "char\t\t\t\t" << sizeof(char) << " Bytes\t\t" << endl;
  cout << "wchar_t\t\t\t\t" << sizeof(wchar_t) << " Bytes\t\t" << endl;
  cout << "bool\t\t\t\t" << sizeof(bool) << " Bytes\t\t\t"
       << std::numeric_limits<bool>::min() << "\t\t\t\t\t"
       << std::numeric_limits<bool>::max() << endl;
  cout << "int\t\t\t\t" << sizeof(int) << " Bytes\t\t\t"
       << std::numeric_limits<int>::min() << "\t\t\t\t"
       << std::numeric_limits<int>::max() << endl;
  cout << "unsigned int\t\t\t" << sizeof(unsigned int) << " Bytes\t\t\t"
       << std::numeric_limits<unsigned int>::min() << "\t\t\t\t\t"
       << std::numeric_limits<unsigned int>::max() << endl;
  cout << "short\t\t\t\t" << sizeof(short) << " Bytes\t\t\t"
       << std::numeric_limits<short>::min() << "\t\t\t\t\t"
       << std::numeric_limits<short>::max() << endl;
  cout << "unsigned short\t\t\t" << sizeof(unsigned short) << " Bytes\t\t\t"
       << std::numeric_limits<unsigned short>::min() << "\t\t\t\t\t"
       << std::numeric_limits<unsigned short>::max() << endl;
  cout << "long\t\t\t\t" << sizeof(long int) << " Bytes\t\t\t"
       << std::numeric_limits<long int>::min() << "\t\t\t\t"
       << std::numeric_limits<long int>::max() << endl;
  cout << "unsigned long int\t\t" << sizeof(unsigned long int) << " Bytes\t\t\t"
       << std::numeric_limits<unsigned long int>::min() << "\t\t\t\t\t"
       << std::numeric_limits<unsigned long int>::max() << endl;
  cout << "long long int\t\t\t" << sizeof(long long int) << " Bytes\t\t\t"
       << std::numeric_limits<long long int>::min() << "\t\t\t"
       << std::numeric_limits<long long int>::max() << endl;
  cout << "unsigned long long int\t\t" << sizeof(unsigned long long int)
       << " Bytes\t\t\t" << std::numeric_limits<unsigned long long int>::min()
       << "\t\t\t\t\t" << std::numeric_limits<unsigned long long int>::max()
       << endl;
  cout << "float\t\t\t\t" << sizeof(float) << " Bytes\t\t\t"
       << std::numeric_limits<float>::min() << "\t\t\t\t"
       << std::numeric_limits<float>::max() << endl;
  cout << "double\t\t\t\t" << sizeof(double) << " Bytes\t\t\t"
       << std::numeric_limits<double>::min() << "\t\t\t\t"
       << std::numeric_limits<double>::max() << endl;
  cout << "long double\t\t\t" << sizeof(long double) << " Bytes\t\t\t"
       << std::numeric_limits<long double>::min() << "\t\t\t\t"
       << std::numeric_limits<long double>::max() << endl;
  cout << "===================================================================="
       << "===========================================" << endl;
  return 0;
}