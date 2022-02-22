// Local Variable

// #include <iostream>
// using namespace std;
// void test();
// int main()
// {
//   int var = 5;
//   test();
//   var = 9;
// }
// void test()
// {
//   int var1;
//   var1 = 6;
//   cout << var1;
// }

// Global Variable

// #include <iostream>
// using namespace std;
// int c = 12;
// void test();
// int main()
// {
//   ++c;
//   cout << c << endl;
//   test();
//   return 0;
// }
// void test()
// {
//   ++c;
//   cout << c;
// }

// Static Variable

#include <iostream>
using namespace std;
void test()
{
  static int var = 0;
  ++var;
  cout << var << endl;
}
int main()
{
  test();
  test();
  return 0;
}