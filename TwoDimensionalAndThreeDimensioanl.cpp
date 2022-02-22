// Two Dimensioanl Array
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//    int test[3][2] = {{2, -5}, {4, 0}, {9, 1}};
//    for (int i = 0; i < 3; i++)
//    {
//      for (int j = 0; j < 2; j++)
//      {
//        cout << "test[" << i << "][" << j << "j=" << test[i][j] << endl;
//      }
//    }
//    return 0;
//  }

// Taking Input For Two Dimensional Array

// #include <iostream>
// using namespace std;

// int main()
// {
//   int numbers[2][3];

//   cout << "Enter 6 numbers: " << endl;

//   // Storing user input in the array
//   for (int i = 0; i < 2; ++i)
//   {
//     for (int j = 0; j < 3; ++j)
//     {
//       cin >> numbers[i][j];
//     }
//   }

//   cout << "The numbers are: " << endl;

//   //  Printing array elements
//   for (int i = 0; i < 2; ++i)
//   {
//     for (int j = 0; j < 3; ++j)
//     {
//       cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
//     }
//   }

//   return 0;
// }

// Three Dimensional Array
//  C++ Program to Store value entered by user in
//  three dimensional array and display it.

#include <iostream>
using namespace std;

int main()
{
  // This array can store upto 12 elements (2x3x2)
  int test[2][3][2] = {
      {{1, 2},
       {3, 4},
       {5, 6}},
      {{7, 8},
       {9, 10},
       {11, 12}}};

  // Displaying the values with proper index.
  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 2; ++k)
      {
        cout << "test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k] << endl;
      }
    }
  }

  return 0;
}