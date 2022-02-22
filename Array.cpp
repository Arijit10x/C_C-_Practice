// //Display Array Elements

// #include <iostream>
// using namespace std;
// int main()
// {
//   int numbers[5] = {7, 5, 6, 12, 35};
//   cout << "The numbers are:\n";
//   for (const int &n : numbers)
//   {
//     cout << n << "\n";
//   }
//   cout << "The numbers are:\n";
//   for (int i = 0; i < 5; i++)
//   {
//     cout << numbers[i] << "\n";
//   }
//   return 0;
// }

// Takling Input From User:
// #include <iostream>
// using namespace std;
// int main()
// {
//   int numbers[5];
//   cout << "Enter 5 Numbers:" << endl;
//   for (int i = 0; i < 5; ++i)
//   {
//     cin >> numbers[i];
//   }
//   cout << "The numbers are:";
//   for (int n = 0; n < 5; ++n)
//   {
//     cout << numbers[n] << "\n";
//   }
//   return 0;
// }

// Sum and Average of Array Elements

#include <iostream>
using namespace std;
int main()
{
  double numbers[] = {7, 5, 6, 12, 35, 27};
  double sum = 0;
  double count = 0;
  double average;
  cout << "The numbers are:\n";

  for (const double &n : numbers)
  {
    cout << n << "";
    sum += n;
    ++count;
  }
  cout << "Their Sum is=\n"
       << sum << endl;
  average = sum / count;
  cout << "Their Average is=\n"
       << average << endl;
  return 0;
}
