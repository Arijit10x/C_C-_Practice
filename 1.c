// #include <stdio.h>
// int main()
// {
//   int number1, number2;
//   printf("Enter two integers: ");
//   scanf("%d %d", &number1, &number2);

//   if (number1 >= number2)
//   {
//     if (number1 == number2)
//     {
//       printf("Result: %d = %d", number1, number2);
//     }
//     else
//     {
//       printf("Result: %d > %d", number1, number2);
//     }
//   }
//   else
//   {
//     printf("Result: %d < %d", number1, number2);
//   }

//   return 0;
// }

// #include <stdio.h>

// int main()
// {
//   int a, b;
//   printf("Enter value of a and b:");
//   scanf("%d %d", &a, &b);
//   if (a > b)
//     printf("Hello %d %d \n", a, b);
//   printf("Hi %d %d \n", a, b);

//   return 0;
// }

// Print numbers from 1 to 10
#include <stdio.h>

// int main()
// {
//   int i;

//   for (i = 10; i < 11; ++i)
//   {
//     printf("%d ", i);
//   }
//   return 0;
// }

// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers

// #include <stdio.h>
// int main()
// {
//   int num, count, sum = 0;

//   printf("Enter a positive integer: ");
//   scanf("%d", &num);

//   // for loop terminates when num is less than count
//   for (count = 1; count <= num; ++count)
//   {
//     sum += count;
//   }

//   printf("Sum = %d", sum);

//   return 0;
// }

// Print numbers from 1 to 5

// #include <stdio.h>
// int main()
// {
//   int i = 1;

//   while (i <= 5)
//   {
//     printf("%d\n", i);
//     ++i;
//   }

//   return 0;
// }

// Program to add numbers until the user enters zero

// #include <stdio.h>
// int main()
// {
//   double number, sum = 0;

//   // the body of the loop is executed at least once
//   do
//   {
//     printf("Enter a number: ");
//     scanf("%lf", &number);
//     sum += number;
//   } while (number != 0.0);

//   printf("Sum = %lf", sum);

//   return 0;
// }

// Program to add numbers until the user enters zero

// #include <stdio.h>
// int main()
// {
//   int number, sum = 0;

//   // the body of the loop is executed at least once
//   do
//   {
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     sum += number;
//   } while (number != 0.0);

//   printf("Sum = %d", sum);

//   return 0;
// }

// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates

// #include <stdio.h>

// int main()
// {
//   int i;
//   double number, sum = 0.0;

//   for (i = 1; i <= 10; ++i)
//   {
//     printf("Enter n%d: ", i);
//     scanf("%lf", &number);

//     // if the user enters a negative number, break the loop
//     if (number <= 0.0)
//     {
//       break;
//     }

//     sum += number; // sum = sum + number;
//   }

//   printf("Sum = %lf", sum);

//   return 0;
// }

// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result

// #include <stdio.h>
// int main()
// {
//   int i;
//   double number, sum = 0.0;

//   for (i = 1; i <= 10; ++i)
//   {
//     printf("Enter a n%d: ", i);
//     scanf("%lf", &number);

//     if (number <= 0.0)
//     {
//       continue;
//     }

//     sum += number; // sum = sum + number;
//   }

//   printf("Sum = %lf", sum);

//   return 0;
// }

// Program to create a simple calculator
// #include <stdio.h>

// int main()
// {
//   char operation;
//   double n1, n2;

//   printf("Enter an operator (+, -, *, /): ");
//   scanf("%c", &operation);
//   printf("Enter two operands: ");
//   scanf("%lf %lf", &n1, &n2);

//   switch (operation)
//   {
//   case '+':
//     printf("%lf + %lf = %lf", n1, n2, n1 + n2);
//     break;

//   case '-':
//     printf("%lf - %lf = %lf", n1, n2, n1 - n2);
//     break;

//   case '*':
//     printf("%.1lf * %.lf = %.1lf", n1, n2, n1 * n2);
//     break;

//   case '/':
//     printf("%lf / %lf = %lf", n1, n2, n1 / n2);
//     break;

//   // operator doesn't match any case constant +, -, *, /
//   default:
//     printf("Error! operator is not correct");
//   }

//   return 0;
// }

// #include <stdio.h>

// void checkPrimeNumber();

// int main()
// {
//   checkPrimeNumber(); // argument is not passed
//   return 0;
// }

// // return type is void meaning doesn't return any value
// void checkPrimeNumber()
// {
//   int n, i, flag = 0;

//   printf("Enter a positive integer: ");
//   scanf("%d", &n);

//   for (i = 2; i <= n / 2; ++i)
//   {
//     if (n % i == 0)
//     {
//       flag = 1;
//     }
//   }
//   if (flag == 1)
//     printf("%d is not a prime number.", n);
//   else
//     printf("%d is a prime number.", n);
// }

/* #include <stdio.h>
int getInteger();

int main()
{
  int n, i, flag = 0;

  // no argument is passed
  n = getInteger();

  for (i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      flag = 1;
      break;
    }
  }

  if (flag == 1)
    printf("%d is not a prime number.", n);
  else
    printf("%d is a prime number.", n);

  return 0;
}

// returns integer entered by the user
int getInteger()
{
  int n;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  return n;
}
*/

/* #include <stdio.h>
void checkPrimeAndDisplay(int n);

int main()
{
  int n;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // n is passed to the function
  checkPrimeAndDisplay(n);

  return 0;
}

// return type is void meaning doesn't return any value
void checkPrimeAndDisplay(int n)
{
  int i, flag = 0;

  for (i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      flag = 1;
      break;
    }
  }
  if (flag == 1)
    printf("%d is not a prime number.", n);
  else
    printf("%d is a prime number.", n);
}
*/

// #include <stdio.h>
// int checkPrimeNumber(int n);

// int main()
// {
//   int n, flag;

//   printf("Enter a positive integer: ");
//   scanf("%d", &n);

//   // n is passed to the checkPrimeNumber() function
//   // the returned value is assigned to the flag variable
//   flag = checkPrimeNumber(n);

//   if (flag == 1)
//     printf("%d is not a prime number", n);
//   else
//     printf("%d is a prime number", n);

//   return 0;
// }

// // int is returned from the function
// int checkPrimeNumber(int n)
// {
//   int i;

//   for (i = 2; i <= n / 2; ++i)
//   {
//     if (n % i == 0)
//       return 1;
//   }

//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int a, b, sum;
//   printf("Enter the no:");
//   scanf("%d %d", &a, &b);
//   sum = a + b;
//   printf("The sum is :%d + %d = %d", a, b, sum);
//   return 0;
// }

// Recursion Functon

/*
#include <stdio.h>
int sum(int n);

int main()
{
  int number, result;

  printf("Enter a positive integer: ");
  scanf("%d", &number);

  result = sum(number);

  printf("sum = %d", result);
  return 0;
}

int sum(int n)
{
  if (n != 0)
    // sum() function calls itself
    return n + sum(n - 1);
  else
    return n;
}
*/

// #include <stdio.h>
// void display();

// int n = 2; // global variable

// int main()
// {
//   ++n;
//   display();

//   return 0;
// }
// void display()
// {

//   ++n;
//   printf("n = %d", n);
// }

// #include <stdio.h>
// void display();

// int main()
// {
//   display();
//   display();
// }
// void display()
// {
//   static int c = 3;
//   c += 2;
//   printf("%d  ", c);
// }

// #include <stdio.h>

// int main()
// {
//   int marks[] = {2, 3, 5, 6, 4};
//   marks[2] = -1;
//   printf("%d", marks[2]);
//   return 0;
// }

// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array

// #include <stdio.h>

// int main()
// {
//   int values[5];

//   printf("Enter 5 integers: ");

//   // taking input and storing it in an array
//   for (int i = 0; i < 5; i++)
//   {
//     scanf("%d", &values[i]);
//   }

//   printf("Displaying integers: ");

//   // printing elements of an array
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d\n", values[i]);
//   }
//   return 0;
// }

// Program to find the average of n numbers using arrays
//
//

// #include <stdio.h>
// int main()
// {

//   float marks[10], i, n, sum = 0, average;

//   printf("Enter number of elements: ");
//   scanf("%f", &n);

//   for (i = 0; i < n; ++i)
//   {
//     printf("Enter number%f: ", i + 1);
//     scanf("%f", &marks[0]);

//     // adding integers entered by the user to the sum variable
//     sum += marks[0];
//   }

//   average = sum / n;
//   printf("Average = %f", average);

//   return 0;
// }

// C program to store temperature of two cities of a week and display it.
// #include <stdio.h>
// const int CITY = 2;
// const int WEEK = 7;
// int main()
// {
//   int temperature[CITY][WEEK];

//   // Using nested loop to store values in a 2d array
//   for (int i = 0; i < CITY; ++i)
//   {
//     for (int j = 0; j < WEEK; ++j)
//     {
//       printf("City %d, Day %d: ", i + 1, j + 1);
//       scanf("%d", &temperature[i][j]);
//     }
//   }
//   printf("\nDisplaying values: \n\n");

//   // Using nested loop to display vlues of a 2d array
//   for (int i = 0; i < CITY; ++i)
//   {
//     for (int j = 0; j < WEEK; ++j)
//     {
//       printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
//     }
//   }
//   return 0;
// }

// C program to find the sum of two matrices of order 2*2

// #include <stdio.h>
// int main()
// {
//   float a[2][2], b[2][2], result[2][2];

//   // Taking input using nested for loop
//   printf("Enter elements of 1st matrix\n");
//   for (int i = 0; i < 2; ++i)
//     for (int j = 0; j < 2; ++j)
//     {
//       printf("Enter a%d%d: ", i + 1, j + 1);
//       scanf("%f", &a[i][j]);
//     }

//   // Taking input using nested for loop
//   printf("Enter elements of 2nd matrix\n");
//   for (int i = 0; i < 2; ++i)
//     for (int j = 0; j < 2; ++j)
//     {
//       printf("Enter b%d%d: ", i + 1, j + 1);
//       scanf("%f", &b[i][j]);
//     }

//   // adding corresponding elements of two arrays
//   for (int i = 0; i < 2; ++i)
//     for (int j = 0; j < 2; ++j)
//     {
//       result[i][j] = a[i][j] + b[i][j];
//     }

//   // Displaying the sum
//   printf("\nSum Of Matrix:");

//   for (int i = 0; i < 2; ++i)
//     for (int j = 0; j < 2; ++j)
//     {
//       printf("%.1f\t", result[i][j]);

//       if (j == 1)
//         printf("\n");
//     }
//   return 0;
// }

// Three Dimensional Arrays
//  C Program to store and print 12 values entered by the user

//
// Passing Individual array elements
// #include <stdio.h>
// void display(int age1, int age2)
// {
//   printf("%d\n", age1);
//   printf("%d\n", age2);
// }

// int main()
// {
//   int ageArray[] = {2, 8, 4, 12};

//   // pass second and third elements to display()
//   display(ageArray[1], ageArray[2]);
//   return 0;
// }

// Passing Arrays to Functions
//  Program to calculate the sum of array elements by passing to a function

// #include <stdio.h>
// float calculateSum(float num[]);

// int main()
// {
//   float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};

//   // num array is passed to calculateSum()
//   result = calculateSum(num);
//   printf("Result = %.2f", result);
//   return 0;
// }

// float calculateSum(float num[])
// {
//   float sum = 0.0;

//   for (int i = 0; i < 6; ++i)
//   {
//     sum += num[i];
//   }

//   return sum;
// }

// Passing Two Dimensional Arrays
// #include <stdio.h>
// void displayNumbers(int num[2][2]);

// int main()
// {
//   int num[2][2];
//   printf("Enter 4 numbers:\n");
//   for (int i = 0; i < 2; ++i)
//   {
//     for (int j = 0; j < 2; ++j)
//     {
//       scanf("%d", &num[i][j]);
//     }
//   }

//   // pass multi-dimensional array to a function
//   displayNumbers(num);

//   return 0;
// }

// void displayNumbers(int num[2][2])
// {
//   printf("Displaying:\n");
//   for (int i = 0; i < 2; ++i)
//   {
//     for (int j = 0; j < 2; ++j)
//     {
//       printf("%d\n", num[i][j]);
//     }
//   }
// }

// #include <stdio.h>
// int main()
// {
//   int var = 5;
//   printf("var: %d\n", var);

//   // Notice the use of & before var
//   printf("address of var: %p", &var);
//   return 0;
// }

// Pointers

// #include <stdio.h>
// int main()
// {
//   int *pc, c;

//   c = 22;
//   printf("Address of c: %p\n", &c);
//   printf("Value of c: %d\n\n", c); // 22

//   pc = &c;
//   printf("Address of pointer pc: %p\n", pc);
//   printf("Content of pointer pc: %d\n\n", *pc); // 22

//   c = 11;
//   printf("Address of pointer pc: %p\n", pc);
//   printf("Content of pointer pc: %d\n\n", *pc); // 11

//   *pc = 2;
//   printf("Address of c: %p\n", &c);
//   printf("Value of c: %d\n\n", c); // 2
//   return 0;
// }

// Pointers and Arrays
// #include <stdio.h>
// int main()
// {

//   int i, x[6], sum = 0;

//   printf("Enter 6 numbers: ");

//   for (i = 0; i < 6; ++i)
//   {
//     // Equivalent to scanf("%d", &x[i]);
//     scanf("%d", x + i);

//     // Equivalent to sum += x[i]
//     sum += *(x + i);
//   }

//   printf("Sum = %d", sum);

//   return 0;
// }

// Arrays and Pointers
// #include <stdio.h>
// int main()
// {

//   int x[5] = {1, 2, 3, 4, 5};
//   int *ptr;

//   // ptr is assigned the address of the third element
//   ptr = &x[1];

//   printf("*ptr = %d \n", *ptr);
//   printf("*(ptr+1) = %d \n", *(ptr + 1));
//   printf("*(ptr-1) = %d", *(ptr - 1));

//   return 0;
// }

// Pass Addresses to Functions
// #include <stdio.h>
// void swap(int *n1, int *n2);

// int main()
// {
//   int num1 = 2, num2 = 10;

//   // address of num1 and num2 is passed
//   swap(&num1, &num2);

//   printf("num1 = %d\n", num1);
//   printf("num2 = %d", num2);
//   return 0;
// }

// void swap(int *n1, int *n2)
// {
//   int temp;
//   temp = *n1;
//   *n1 = *n2;
//   *n2 = temp;
// }

// Passing Pointers to Functions

// #include <stdio.h>

// void addOne(int *ptr)
// {
//   (*ptr)++; // adding 1 to *ptr
// }

// int main()
// {
//   int *p, i = 8;
//   p = &i;
//   addOne(p);

//   printf("%d", *p); // 11
//   return 0;
// }

// malloc and free

// Program to calculate the sum of n numbers entered by the user

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   int n, i, *ptr, sum = 0;

//   printf("Enter number of elements: ");
//   scanf("%d", &n);

//   ptr = (int *)malloc(n * sizeof(int));

//   // if memory cannot be allocated
//   if (ptr == NULL)
//   {
//     printf("Error! memory not allocated.");
//     exit(0);
//   }

//   printf("Enter elements: ");
//   for (i = 0; i < n; ++i)
//   {
//     scanf("%d", ptr + i);
//     sum += *(ptr + i);
//   }

//   printf("Sum = %d", sum);

//   // deallocating the memory
//   free(ptr);

//   return 0;
// }

// Realloc

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   int *ptr, i, n1, n2;
//   printf("Enter size: ");
//   scanf("%d", &n1);

//   ptr = (int *)malloc(n1 * sizeof(int));

//   printf("Addresses of previously allocated memory:\n");
//   for (i = 0; i < n1; ++i)
//     printf("%pc\n", ptr + i);

//   printf("\nEnter the new size: ");
//   scanf("%d", &n2);

//   // rellocating the memory
//   ptr = realloc(ptr, n2 * sizeof(int));

//   printf("Addresses of newly allocated memory:\n");
//   for (i = 0; i < n2; ++i)
//     printf("%pc\n", ptr + i);

//   free(ptr);

//   return 0;
// }

// Passing Strings To functions
// #include <stdio.h>
// void displayString(char str[]);

// int main()
// {
//   char str[50];
//   printf("Enter string: ");
//   fgets(str, sizeof(str), stdin);
//   displayString(str); // Passing string to a function.
//   return 0;
// }
// void displayString(char str[])
// {
//   printf("String Output: ");
//   puts(str);
// }

// Strings And Pointers

// #include <stdio.h>

// int main(void)
// {
//   char name[] = "Harry Potter";

//   printf("%c", *name);       // Output: H
//   printf("%c", *(name + 1)); // Output: a
//   printf("%c", *(name + 7)); // Output: o

//   char *namePtr;

//   namePtr = name;
//   printf("%c", *namePtr);       // Output: H
//   printf("%c", *(namePtr + 1)); // Output: a
//   printf("%c", *(namePtr + 7)); // Output: o
// }

// Structure in C

// #include <stdio.h>
// #include <string.h>

// // create struct with person1 variable
// struct Person
// {
//   char name[50];
//   int citNo;
//   float salary;
// } person1;

// int main()
// {

//   // assign value to name of person1
//   strcpy(person1.name, "George Orwell");

//   // assign values to other person1 variables
//   person1.citNo = 1984;
//   person1.salary = 2500;

//   // print struct variables
//   printf("Name: %s\n", person1.name);
//   printf("Citizenship No.: %d\n", person1.citNo);
//   printf("Salary: %.2f", person1.salary);

//   return 0;
// }

// C++ Struct Keyword typedef

// #include <stdio.h>
// #include <string.h>

// // struct with typedef person
// typedef struct Person
// {
//   char name[50];
//   int citNo;
//   float salary;
// } person;

// int main()
// {

//   // create  Person variable
//   person p1;

//   // assign value to name of p1
//   strcpy(p1.name, "Ronaldo Ray");

//   // assign values to other p1 variables
//   p1.citNo = 1994;
//   p1.salary = 2000;

//   // print struct variables
//   printf("Name: %s\n", p1.name);
//   printf("Citizenship No.: %d\n", p1.citNo);
//   printf("Salary: %.2f", p1.salary);

//   return 0;
// }

// C++ Nested Structures
// #include <stdio.h>

// struct complex
// {
//   int imag;
//   float real;
// };

// struct number
// {
//   struct complex comp;
//   int integer;
// } num1;

// int main()
// {

//   // initialize complex variables
//   num1.comp.imag = 11;
//   num1.comp.real = 5.25;

//   // initialize number variable
//   num1.integer = 6;

//   // print struct variables
//   printf("Imaginary Part: %d\n", num1.comp.imag);
//   printf("Real Part: %.2f\n", num1.comp.real);
//   printf("Integer: %d", num1.integer);

//   return 0;
// }

// Struct using Pointers

// #include <stdio.h>
// struct person
// {
//   int age;
//   float weight;
// };

// int main()
// {
//   struct person *personPtr, person1;
//   personPtr = &person1;

//   printf("Enter age: ");
//   scanf("%d", &personPtr->age);

//   printf("Enter weight: ");
//   scanf("%f", &personPtr->weight);

//   printf("Displaying:\n");
//   printf("Age: %d\n", personPtr->age);
//   printf("weight: %f", personPtr->weight);

//   return 0;
// }

// Dynamic Memory Allocation Of Structs
// #include <stdio.h>
// #include <stdlib.h>
// struct person
// {
//   int age;
//   float weight;
//   char name[30];
// };

// int main()
// {
//   struct person *ptr;
//   int i, n;

//   printf("Enter the number of persons: ");
//   scanf("%d", &n);

//   // allocating memory for n numbers of struct person
//   ptr = (struct person *)malloc(n * sizeof(struct person));

//   for (i = 0; i < n; ++i)
//   {
//     printf("Enter first name and age respectively: ");

//     // To access members of 1st struct person,
//     // ptr->name and ptr->age is used

//     // To access members of 2nd struct person,
//     // (ptr+1)->name and (ptr+1)->age is used
//     scanf("%s %d", (ptr + i)->name, &(ptr + i)->age);
//   }

//   printf("Displaying Information:\n");
//   for (i = 0; i < n; ++i)
//     printf("Name: %s\tAge: %d\n", (ptr + i)->name, (ptr + i)->age);

//   return 0;
// }

// Passing Structs To Functions

// #include <stdio.h>
// struct student
// {
//   char name[50];
//   int age;
// };

// // function prototype
// void display(struct student s);

// int main()
// {
//   struct student s1;

//   printf("Enter name: ");

//   // read string input from the user until \n is entered
//   // \n is discarded
//   scanf("%[^\n]%*c", s1.name);

//   printf("Enter age: ");
//   scanf("%d", &s1.age);

//   display(s1); // passing struct as an argument

//   return 0;
// }

// void display(struct student s)
// {
//   printf("\nDisplaying information\n");
//   printf("Name: %s", s.name);
//   printf("\nAge: %d", s.age);
// }

// Return Struct from a Function

// #include <stdio.h>
// struct student
// {
//   char name[50];
//   int age;
// };

// // function prototype
// struct student getInformation();

// int main()
// {
//   struct student s;

//   s = getInformation();

//   printf("\nDisplaying information\n");
//   printf("Name: %s", s.name);
//   printf("\nRoll: %d", s.age);

//   return 0;
// }
// struct student getInformation()
// {
//   struct student s1;

//   printf("Enter name: ");
//   scanf("%[^\n]%*c", s1.name);

//   printf("Enter age: ");
//   scanf("%d", &s1.age);

//   return s1;
// }

// Pssing Struct By Reference

// #include <stdio.h>
// typedef struct Complex
// {
//   float real;
//   float imag;
// } complex;

// void addNumbers(complex c1, complex c2, complex *result);

// int main()
// {
//   complex c1, c2, result;

//   printf("For first number,\n");
//   printf("Enter real part: ");
//   scanf("%f", &c1.real);
//   printf("Enter imaginary part: ");
//   scanf("%f", &c1.imag);

//   printf("For second number, \n");
//   printf("Enter real part: ");
//   scanf("%f", &c2.real);
//   printf("Enter imaginary part: ");
//   scanf("%f", &c2.imag);

//   addNumbers(c1, c2, &result);
//   printf("\nresult.real = %.1f\n", result.real);
//   printf("result.imag = %.1f", result.imag);

//   return 0;
// }
// void addNumbers(complex c1, complex c2, complex *result)
// {
//   result->real = c1.real + c2.real;
//   result->imag = c1.imag + c2.imag;
// }

// Difference between unions and structures

// #include <stdio.h>
// union unionJob
// {
//   // defining a union
//   char name[32];
//   float salary;
//   int workerNo;
// } uJob;

// struct structJob
// {
//   char name[32];
//   float salary;
//   int workerNo;
// } sJob;

// int main()
// {
//   printf("size of union = %d bytes", sizeof(uJob));
//   printf("\nsize of structure = %d bytes", sizeof(sJob));
//   return 0;
// }

// Accesssing Union Members

// #include <stdio.h>
// union Job
// {
//   float salary;
//   int workerNo;
// } j;

// int main()
// {
//   j.salary = 12.3;

//   // when j.workerNo is assigned a value,
//   // j.salary will no longer hold 12.3
//   j.workerNo = 100;

//   printf("Salary = %.1f\n", j.salary);
//   printf("Number of workers = %d", j.workerNo);
//   return 0;
// }

// C File Handling
// 1 : Write to a text file
// 2 : Read from a text file
// 3: Write to a binary file using fwrite()
// 4: Read from a binary file using fread()
// 5: fseek()

// Enumeration

// #include <stdio.h>

// enum week
// {
//   Sunday,
//   Monday,
//   Tuesday,
//   Wednesday,
//   Thursday,
//   Friday,
//   Saturday
// };

// int main()
// {
//   // creating today variable of enum week type
//   enum week today;
//   today = Monday;
//   printf("Day %d", today + 2);
//   return 0;
// }

// #include <stdio.h>

// enum suit
// {
//   club = 0,
//   diamonds = 10,
//   hearts = 20,
//   spades = 3
// } card;

// int main()
// {
//   card = club;
//   printf("Size of enum variable = %d bytes", sizeof(card));
//   return 0;
// }

// #include <stdio.h>

// enum designFlags
// {
//   BOLD = 1,
//   ITALICS = 2,
//   UNDERLINE = 4
// };

// int main()
// {
//   int myDesign = BOLD | ITALICS;

//   //    00000001
//   //  | 00000100
//   //  ___________
//   //    00000101

//   printf("%d", myDesign);

//   return 0;
// }

// Define Preprocessor

// #include <stdio.h>
// #define PI 3.1415

// int main()
// {
//   float radius, area;
//   printf("Enter the radius: ");
//   scanf("%f", &radius);

//   // Notice, the use of PI
//   area = PI * radius * radius;

//   printf("Area=%.2f", area);
//   return 0;
// }

// Using Define Preprocessor
// #include <stdio.h>
// #define PI 3.1415
// #define circleArea(r) (PI * r * r)

// int main()
// {
//   float radius, area;

//   printf("Enter the radius: ");
//   scanf("%f", &radius);
//   area = circleArea(radius);
//   printf("Area = %.2f", area);

//   return 0;
// }

//#ifdef Directive
// #ifdef MACRO
// // conditional codes
// #endif

// #if, #elif and #else Directive
// #if expression
// // conditional codes should be non-zero value
// #endif

// The optional #else directive can be used with #if directive.

// #if expression
//     conditional codes if expression is non -zero
// #else

//     conditional if expression is 0
// #endif
//         You can also add nested conditional to your #if... #else using #elif

// #if expression
// // conditional codes if expression is non-zero
// #elif expression1
// // conditional codes if expression is non-zero
// #elif expression2
// // conditional codes if expression is non-zero
// #else
// // conditional if all expressions are 0
// #endif

// #if defined BUFFER_SIZE && BUFFER_SIZE >= 2048
// // codes

// Current Time using __TIME__
#include <stdio.h>
int main()
{
  printf("Current time: %s", __TIME__);
}