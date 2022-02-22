// #include <iostream>
// using namespace std;

// int main()
// {
//   cout << "This is C++ Programming";
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int far = 70;
//   char car = 'A';
//   cout << far << endl;
//   cout << car << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int num;
//   cout << "Enter an Integer:";
//   cin >> num;
//   cout << "The number is :" << num;
//   return 0;
// }

// C++ Taking Multiple Inputs

// #include <iostream>
// using namespace std;
// int main()
// {
//   char far;
//   int car;
//   cout << "Enter a character and a integer:";
//   cin >> far;
//   cin >> car;
//   cout << "The character is: " << far << endl;
//   cout << "The integer is: " << car << endl;
//   return 0;
// }

// Implicit Conversion
//  Conversion from int to double:
//   Working of implicit type-conversion

// #include <iostream>
// using namespace std;

// int main()
// {
//   int car = 9;
//   double bar;
//   bar = car;
//   cout << "The Integer is: " << car << endl;
//   cout << "The double is: " << bar << endl;
//   return 0;
// }

// Conversion from double to int
// Working of Implicit type-conversion

// #include <iostream>
// using namespace std;

// int main()
// {

//   int car;
//   double bar = 9.99;

//   // implicit conversion
//   // assigning a double value to an int variable
//   car = bar;
//   cout << "The integer is = " << car << endl;
//   cout << "The double is = " << bar << endl;

//   return 0;
// }

// Explicit Conversion

// #include <iostream>
// using namespace std;
// int main()
// {
//   int car = 26;
//   double bike;
//   bike = (double)car;
//   cout << "Double value = " << bike << endl;
//   return 0;
// }

// C-Style Type Casting and C++ Style Typ e Casting
// #include <iostream>
// using namespace std;
// int main()
// {
//   // initializing a double variable
//   double car = 3.56;
//   cout << "Double = " << car << endl;

//   // C-style conversion from double to int
//   int bike = (int)car;
//   cout << "Integer = " << bike << endl;

//   // function-style conversion from double to int
//   int truck = int(car);
//   cout << "Integer1  = " << truck << endl;

//   return 0;
// }

// Operators
// Arithmetic Oerators

// #include <iostream>
// using namespace std;

// int main()
// {
//   int a, b;
//   a = 7.0;
//   b = 2.0;

//   // printing the sum of a and b
//   cout << "Sum = " << (a + b) << endl;

//   // printing the difference of a and b
//   cout << "Minus = " << (a - b) << endl;

//   // printing the product of a and b
//   cout << "Multiplication = " << (a * b) << endl;

//   // printing the division of a by b
//   cout << "Divide= " << (a / b) << endl;

//   // printing the modulo of a by b
//   cout << "Modulo = " << (a % b) << endl;

//   return 0;
// }

// Increment and Decreement operators

// #include <iostream>
// using namespace std;

// int main()
// {
//   int a = 10, b = 20, game_a, game_b;
//   game_a = a++;
//   cout << "Increment = " << game_a << endl;
//   game_b = --b;
//   cout << "Decrement = " << game_b << endl;

//   return 0;
// }

// Assignment Operators
// #include <iostream>
// using namespace std;

// int main()
// {
//   int a, b;

//   a = 2;
//   b = 7;

//   cout << "a = " << a << endl;
//   cout << "b = " << b << endl;
//   cout << "After a += b;" << endl;
//   a += b;
//   cout << "a = " << a << endl;

//   return 0;
// }

// Realational Operators

// #include <iostream>
// using namespace std;

// int main()
// {
//   int a, b;
//   a = 7;
//   b = 9;
//   bool result;

//   result = (a == b); // false
//   cout << "7 == 9 is " << result << endl;

//   result = (a != b); // true
//   cout << "7 != 9 is " << result << endl;

//   result = a > b; // false
//   cout << "7 > 9 is " << result << endl;

//   result = a < b; // true
//   cout << "7 < 9 is " << result << endl;

//   result = a >= b; // false
//   cout << "7 >= 9 is " << result << endl;

//   result = a <= b; // true
//   cout << "7 <= 9 is " << result << endl;

//   return 0;
// }

// Nested If...

// C++ program to find if an integer is positive, negative or zero
// using nested if statements

// #include <iostream>
// using namespace std;

// int main()
// {

//   int num;

//   cout << "Enter an integer: ";
//   cin >> num;

//   // outer if condition
//   if (num != 0)
//   {

//     // inner if condition
//     if (num > 0)
//     {
//       cout << "The number is positive." << endl;
//     }
//     // inner else condition
//     else
//     {
//       cout << "The number is negative." << endl;
//     }
//   }
//   // outer else condition
//   else
//   {
//     cout << "The number is 0 and it is neither positive nor negative." << endl;
//   }

//   cout << "This line is always printed." << endl;

//   return 0;
// }

// For Loop
//  C++ program to find the sum of first n natural numbers
//  positive integers such as 1,2,3,...n are known as natural numbers

// #include <iostream>

// using namespace std;

// int main()
// {
//   int num, sum;
//   sum = 0;

//   cout << "Enter a positive integer: ";
//   cin >> num;

//   for (int i = 1; i <= num; ++i)
//   {
//     sum += i;
//   }

//   cout << "Sum = " << sum << endl;

//   return 0;
// }

// While Loop

// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

// #include <iostream>
// using namespace std;

// int main()
// {
//   int number;
//   int sum = 0;

//   // take input from the user
//   cout << "Enter a number: ";
//   cin >> number;

//   while (number >= 0)
//   {
//     // add all positive numbers
//     sum += number;

//     // take input again if the number is positive
//     cout << "Enter a number: ";
//     cin >> number;
//   }

//   // display the sum
//   cout << "\nThe sum is " << sum << endl;

//   return 0;
// }

// Do-while Loop
//  program to find the sum of positive numbers
//  If the user enters a negative number, the loop ends
//  the negative number entered is not added to the sum

// #include <iostream>
// using namespace std;

// int main()
// {
//   int number = 0;
//   int sum = 0;

//   do
//   {
//     sum += number;

//     // take input from the user
//     cout << "Enter a number: ";
//     cin >> number;
//   } while (number >= 0);

//   // display the sum
//   cout << "\nThe sum is " << sum << endl;

//   return 0;
// }

// Break with while loop

// program to find the sum of positive numbers
// if the user enters a negative numbers, break ends the loop
// the negative number entered is not added to sum

// #include <iostream>
// using namespace std;

// int main()
// {
//   int number;
//   int sum = 0;

//   while (true)
//   {
//     // take input from the user
//     cout << "Enter a number: ";
//     cin >> number;

//     // break condition
//     if (number < 0)
//     {
//       break;
//     }

//     // add all positive numbers
//     sum += number;
//   }

//   // display the sum
//   cout << "The sum is " << sum << endl;

//   return 0;
// }

// Break with Nested Loop
//  using break statement inside
//  nested for loop

// #include <iostream>
// using namespace std;

// int main()
// {
//   int number;
//   int sum = 0;

//   // nested for loops

//   // first loop
//   for (int i = 1; i <= 3; i++)
//   {
//     // second loop
//     for (int j = 1; j <= 3; j++)
//     {
//       if (i == 2)
//       {
//         break;
//       }
//       cout << "i = " << i << ", j = " << j << endl;
//     }
//   }

//   return 0;
// }

// Break Statement
//  Program to build a simple calculator using switch Statement
// #include <iostream>
// using namespace std;

// int main()
// {
//   char oper;
//   float num1, num2;
//   cout << "Enter an operator (+, -, *, /): ";
//   cin >> oper;
//   cout << "Enter two numbers: " << endl;
//   cin >> num1 >> num2;

//   switch (oper)
//   {
//   case '+':
//     cout << num1 << " + " << num2 << " = " << num1 + num2;
//     break;
//   case '-':
//     cout << num1 << " - " << num2 << " = " << num1 - num2;
//     break;
//   case '*':
//     cout << num1 << " * " << num2 << " = " << num1 * num2;
//     break;
//   case '/':
//     cout << num1 << " / " << num2 << " = " << num1 / num2;
//     break;
//   default:
//     // operator is doesn't match any case constant (+, -, *, /)
//     cout << "Error! The operator is not correct";
//     break;
//   }

//   return 0;
// }

// Functions
//  program to add two numbers using a function

// #include <iostream>

// using namespace std;

// // declaring a function
// int add(int a, int b)
// {
//   return (a + b);
// }

// int main()
// {

//   int sum;

//   // calling the function and storing
//   // the returned value in sum
//   sum = add(100, 78);

//   cout << "100 + 78 = " << sum << endl;

//   return 0;
// }

// Function Prototype
//  using function definition after main() function
//  function prototype is declared before main()

// #include <iostream>

// using namespace std;

// // function prototype
// int add(int, int);

// int main()
// {
//   int sum;

//   // calling the function and storing
//   // the returned value in sum
//   sum = add(100, 78);

//   cout << "100 + 78 = " << sum << endl;

//   return 0;
// }

// function definition
// int add(int a, int b)
// {
//   return (a + b);
// }

// Overloading using different types of parameters

// Program to compute absolute value
// Works for both int and float

// #include <iostream>
// using namespace std;

// // function with float type parameter
// float absolute(float var)
// {
//   if (var < 0.0)
//     var = -var;
//   return var;
// }

// // function with int type parameter
// int absolute(int var)
// {
//   if (var < 0)
//     var = -var;
//   return var;
// }

// int main()
// {

//   // call function with int type parameter
//   cout << "Absolute value of -5 = " << absolute(-5) << endl;

//   // call function with float type parameter
//   cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;
//   return 0;
// }

// Overloading Using Different Number of Parameters

// #include <iostream>
// using namespace std;

// // function with 2 parameters
// void display(int var1, double var2)
// {
//   cout << "Integer number: " << var1;
//   cout << " and double number: " << var2 << endl;
// }

// // function with double type single parameter
// void display(double var)
// {
//   cout << "Double number: " << var << endl;
// }

// // function with int type single parameter
// void display(int var)
// {
//   cout << "Integer number: " << var << endl;
// }

// int main()
// {

//   int a = 5;
//   double b = 5.5;

//   // call function with int type parameter
//   display(a);

//   // call function with double type parameter
//   display(b);

//   // call function with 2 parameters
//   display(a, b);

//   return 0;
// }

// Default Argument

// #include <iostream>
// using namespace std;

// // defining the default arguments
// void display(char c = '*', int count = 3)
// {
//   for (int i = 1; i <= count; ++i)
//   {
//     cout << c;
//   }
//   cout << endl;
// }

// int main()
// {
//   int count = 5;

//   cout << "No argument passed: ";
//   // *, 3 will be parameters
//   display();

//   cout << "First argument passed: ";
//   // #, 3 will be parameters
//   display('#');

//   cout << "Both argument passed: ";
//   // $, 5 will be parameters
//   display('$', count);

//   return 0;
// }

// Storage Class
//  Local Varibale

// #include <iostream>
// using namespace std;

// void test();

// int main()
// {
//   // local variable to main()
//   int var = 5;

//   test();

//   // illegal: var1 not declared inside main()
//   var = 9;
// }

// void test()
// {
//   // local variable to test()
//   int var1;
//   var1 = 6;

//   // illegal: var not declared inside test()
//   cout << var1;
// }

// Global Variable
// #include <iostream>
// using namespace std;

// // Global variable declaration
// int c = 12;

// void test();

// int main()
// {
//   ++c;

//   // Outputs 13
//   cout << c << endl;
//   test();

//   return 0;
// }

// void test()
// {
//   ++c;

//   // Outputs 14
//   cout << c;
// }

// Static Local Variable

// #include <iostream>
// using namespace std;

// void test()
// {
//   // var is a static variable
//   static int var = 0;
//   ++var;

//   cout << var << endl;
// }

// int main()
// {

//   test();
//   test();

//   return 0;
// }

// Recursion
//  Factorial of n = 1*2*3*...*n

// #include <iostream>
// using namespace std;

// int factorial(int);

// int main()
// {
//   int n, result;

//   cout << "Enter a non-negative number: ";
//   cin >> n;

//   result = factorial(n);
//   cout << "Factorial of " << n << " = " << result;
//   return 0;
// }

// int factorial(int n)
// {
//   if (n > 1)
//   {
//     return n * factorial(n - 1);
//   }
//   else
//   {
//     return 1;
//   }
// }

// Return By Reference

#include <iostream>
using namespace std;

// global variable
int num;

// function declaration
int &test();

int main()
{

  // assign 5 to num variable
  // equivalent to num = 5;
  test() = 5;

  cout << num;

  return 0;
}

// function definition
// returns the address of num variable
int &test()
{
  return num;
}