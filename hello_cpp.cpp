using namespace std;
#include <iostream>

// for cout radix test
#include <sstream>
#include <bitset>

#include <iomanip>

int main()
{
  std::cout << "Hello, World! w/ C++" << std::endl;

  // ==================================================================
  // cout with diffent radix
      std::cout << "The number 42 in octal:   " << std::oct << 42 << '\n'
                << "The number 42 in decimal: " << std::dec << 42 << '\n'
                << "The number 42 in hex:     " << std::hex << std::setw(4) << std::setfill('0') << 42 << '\n';
    int n;
    std::istringstream("2A") >> std::hex >> n;
    std::cout << std::dec << "Parsing \"2A\" as hex gives " << n << '\n';
    // the output base is sticky until changed
    std::cout << std::hex << "42 as hex gives " << 42
        << " and 21 as hex gives " << 21 << '\n';
 
    // Note: there is no I/O manipulator that sets up a stream to print out
    // numbers in binary format (e.g. bin). If binary output is necessary
    // the std::bitset trick can be used:
    std::cout << "The number 42 in binary:  " << std::bitset<8>{42} << '\n';

  // ==================================================================
  // about const usage

  const int a = 1 ;
  volatile const int b = 2 ;
  int c = 3;

  std::cout << "a=" << a << "\n";
  std::cout << "b=" << b << "\n";
  std::cout << "c=" << c << "\n";

  //a = 8; // compile error !!! -- assignment of read-only variable

  int *p = (int *)&a;
  *p = 7;
  std::cout << "a=" << a << "\n";

  p = (int *)&b;
  *p = 8;
  std::cout << "b=" << b << "\n";

  int * const q = &c;
  *q = 9;
  std::cout << "c=" << c << "\n";
  //q = &b; // compile error !!! --- assignment of read-only variable
  //std::cout << "b=" << b << "\n";

  return 0;
}
