#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// using namespace std;
using std::cout;
using std::cin;
using std::string;

int main() {
  // // --------------------------
  // // Basic Output
  // // --------------------------
  // cout << "hello world!" << "\n"; // faster
  // cout << "Hello World!" << endl; // flushes output buffer
  // cout << "hello " << "world" << "\n";

  // // --------------------------
  // // Variables and Sizes
  // // --------------------------
  // int age = 23;
  // cout << "Age: " << age << "\n";
  // cout << "Size of int: " << sizeof(age) << " bytes\n";

  // char grade = 'A';
  // cout << "Grade: " << grade << "\n";
  // cout << "Size of char: " << sizeof(grade) << " bytes\n";

  // float x = 5.99f;
  // cout << "Float x: " << x << "\n";
  // cout << "Size of float: " << sizeof(x) << " bytes\n";

  // double pi = 3.14159;
  // cout << "Double pi: " << pi << "\n";
  // cout << "Size of double: " << sizeof(pi) << " bytes\n";

  // bool condition = true;
  // cout << "Boolean condition: " << condition << "\n";
  // cout << "Size of bool: " << sizeof(condition) << " bytes\n";

  // string str = "Hello World!";
  // cout << "String: " << str << "\n";
  // cout << "Size of string object: " << sizeof(str) << " bytes\n";

  // // --------------------------
  // // Multiple Variables and Operations
  // // --------------------------
  // int x1 = 2, y1 = 7, z1 = 8;
  // cout << "Sum: " << x1 + y1 + z1 << "\n";

  // int d, e;
  // d = e = 10;
  // cout << "d: " << d << " | e: " << e << "\n";

  // // --------------------------
  // // Constants
  // // --------------------------
  // const int minPerHr = 60;
  // cout << "Minutes per hour: " << minPerHr << "\n";

  // // --------------------------
  // // Scientific Notation
  // // --------------------------
  // double a = 12E8; // same as 12e8
  // cout << "Scientific notation: " << a << "\n";

  // // --------------------------
  // // The auto Keyword
  // // --------------------------
  // auto x = 5; //Has to assign the value at the same time
  // cout << x << '\n';
  // auto str1 = string("Hello"); //best
  // auto str2 = Hello;
  // cout << str << '\n';

  // // --------------------------
  // // Arithmetic Operators
  // // --------------------------
  // int a = 7, b = 5;
  // cout << "Addition: " << a << " + " << b << " = " << a + b << '\n';
  // cout << "Subtraction: " << a << " - " << b << " = " << a - b << '\n';
  // cout << "Multiplication: " << a << " * " << b << " = " << a * b << '\n';

  // cout << "Integer Division: " << a << " / " << b << " = " << a / b << '\n';
  // cout << "Floating-point Division: " << a << " / " << b << " = " << a * 1.0 / b << '\n';

  // cout << "Modulo: " << a << " % " << b << " = " << a % b << '\n';

  // int c = 7;
  // cout << "c = " << c << '\n';
  // c++; //Increment
  // cout << "Now c = " << c << '\n';

  // int d = 7;
  // cout << "d = " << c << '\n';
  // d--; //Decrement
  // cout << "Now d = " << d << '\n';

  // // --------------------------
  // // Assignment Operators
  // // --------------------------
  // int x = 10;
  // x += 5; // Same as x = x + 5
  // cout << "x = " << x << '\n';

  // int y = 10;
  // y -= 5; // Same as y = y -5
  // cout << "y = " << y << '\n';

  // int z = 10;
  // z *= 5; // Same as z = z * 5
  // cout << "z = " << z << '\n';

  // int p = 10;
  // p %= 5; // Same as p = p % 5
  // cout << "p = " << p << '\n';

  // int q = 10;
  // q &= 5;
  // //   00001010  (10)
  // // & 00000101  (5)
  // // ------------
  // //   00000000  (0)
  // cout << "q = " << q << '\n';

  // int r = 10;
  // r |= 5;
  // //   00001010  (10)
  // // | 00000101  (5)
  // // ------------
  // //   00001111  (15)
  // cout << "r = " << r << '\n';

  // int s = 10;
  // s ^= 5;
  // //   00001010  (10)
  // // ^ 00000101  (5)
  // // ------------
  // //   00001111  (15) // XOR gives 1 if different, 0 if same.
  // cout << "s = " << s << '\n';

  // int t = 10;
  // t >>= 1;
  // //   00001010  (10)
  // // >> 1
  // //   00000101  (5)
  // cout << "t = " << t << '\n';

  // int u = 10;
  // u <<= 2;
  // //   00001010  (10)
  // // << 2
  // //   00101000  (40)
  // cout << "u = " << u << '\n';

  // // --------------------------
  // // Comparison Operators
  // // --------------------------
  // int x = 5, y = 7;
  // cout << (x == y) << '\n';
  // cout << (x != y) << '\n';
  // cout << (x > y) << '\n';
  // cout << (x < y) << '\n';
  // cout << (x >= y) << '\n';
  // cout << (x <= y) << '\n';

  // // --------------------------
  // // Logical Operators
  // // --------------------------
  // cout << "0 && 0 = " << (0 && 0) << "  // Both must be true to get 1\n";
  // cout << "0 && 1 = " << (0 && 1) << "\n";
  // cout << "1 && 0 = " << (1 && 0) << "\n";
  // cout << "1 && 1 = " << (1 && 1) << "\n";
  
  // cout << "0 || 0 = " << (0 || 0) << "  // At least one must be true to get 1\n";
  // cout << "0 || 1 = " << (0 || 1) << "\n";
  // cout << "1 || 0 = " << (1 || 0) << "\n";
  // cout << "1 || 1 = " << (1 || 1) << "\n";
  
  // cout << "!0 = " << (!0) << "  // Reverse, 0 becomes 1\n";
  // cout << "!1 = " << (!1) << "  // Reverse, 1 becomes 0\n";

  // // --------------------------
  // // Order of Operations
  // // --------------------------
  // int a = 5, b = 3, c = 2;

  // cout << "(a + b) * c = " << (a + b) * c << '\n'; // 8 * 2 = 16

  // // Unary operators
  // cout << "-a = " << -a << '\n'; // -5
  // cout << "+b = " << +b << '\n'; // 3
  // cout << "!0 = " << !0 << '\n'; // 1
  // cout << "!1 = " << !1 << '\n'; // 0

  // // Multiplication, Division, Modulo
  // cout << "a * b / c = " << a * b / c << '\n'; // 5 * 3 / 2 = 7 (integer division)
  // cout << "a % c = " << a % c << '\n'; // 5 % 2 = 1

  // // Addition, Subtraction
  // cout << "a + b - c = " << a + b - c << '\n'; // 5 + 3 - 2 = 6

  // // Bitwise shift
  // cout << "a << 1 = " << (a << 1) << '\n'; // 5 << 1 = 10
  // cout << "b >> 1 = " << (b >> 1) << '\n'; // 3 >> 1 = 1

  // // Relational operators
  // cout << "a > b = " << (a > b) << '\n'; // 1
  // cout << "a <= c = " << (a <= c) << '\n'; // 0

  // // Equality operators
  // cout << "a == b = " << (a == b) << '\n'; // 0
  // cout << "a != c = " << (a != c) << '\n'; // 1

  // // Bitwise AND, XOR, OR
  // cout << "a & b = " << (a & b) << '\n'; // 5 & 3 = 1
  // cout << "a ^ b = " << (a ^ b) << '\n'; // 5 ^ 3 = 6
  // cout << "a | b = " << (a | b) << '\n'; // 5 | 3 = 7

  // // Logical AND, OR
  // cout << "1 && 0 = " << (1 && 0) << '\n'; // 0
  // cout << "1 || 0 = " << (1 || 0) << '\n'; // 1

  // // Ternary operator
  // cout << "a > b ? a : b = " << (a > b ? a : b) << '\n'; // 5 > 3 → 5

  // // Assignment (right-to-left)
  // int x, y;
  // x = y = 10;
  // cout << "x = " << x << ", y = " << y << '\n';

  // // --------------------------
  // // String
  // // --------------------------

  // string fName = "Orin";
  // string lName = "Pal";
  // string fullName1 = fName + " " + lName;
  // cout << fullName1 << '\n';
  // string fullName2 = fName.append(lName);
  // cout << fullName2 << '\n';

  // int x = 10, y = 20;
  // int z = x + y;
  // cout << z << '\n';

  // string a = "10", b = "20";
  // string c = a + b;
  // cout << c << '\n';

  // // cout << x + a << '\n'; // Error

  // string name = "Arin";
  // int nameLength = name.length();
  // cout << nameLength << '\n';

  // int nameSize = name.size();
  // cout << nameSize << '\n';

  // cout << name[0] << '\n';
  // cout << name[1] << '\n';
  // cout << name[2] << '\n';
  // cout << name[3] << '\n';

  // int strLastIndex = name.length() - 1;
  // cout << name[strLastIndex] << '\n';

  // name[0] = 'O';
  // cout << name << '\n';

  // cout << name.at(0) << '\n';
  // cout << name.at(1) << '\n';

  // cout << "\"it\'s a beautiful house\", she said. \n\t10 \\ 2 is 5" << '\n';

  // // --------------------------
  // // User Input String
  // // --------------------------
  // string fullName;
  // cin >> fullName;
  // cout << "Your first name is " << fullName << '\n';

  // getline(cin, fullName);
  // cout << "Your full name is " << fullName << '\n';

  // char str[13] = "Hello World!";
  // cout << str << '\n';

  







  return 0;
}