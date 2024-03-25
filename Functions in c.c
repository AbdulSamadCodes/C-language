#include <stdio.h>

// Functions are blocks of reusable and organised code that usually perform a single, related action. They are a crucial part of programming because they save you a lot of time and make your code cleaner.

// A function consist of two parts:
//  Declaration: the function's name, return type, and parameters (if any)
//  Definition: the body of the function (code to be executed)

// Q:Write a function to  return sum of two numbers

int Sum(int num1, int num2)
{
   int ans = num1 + num2;
   return ans;
}

// Q:Write a function to  return ascii value of a character.

char asciicharacter(int num)
{
   char ans = (char)(num);
   return ans;
}

// Q:Write a function to calculate factorial of a number.

int factorial(int num)
{
   if (num == 0 || num == 1)
   {
      return 1;
   }

   return num * factorial(num - 1);
}

// Q:When the function does not return anythng , it is of void type.

void printHello()
{
   printf("Hello world");
}

int main()
{

   // Calling sum function from main whose return type is int

   int result = Sum(7, 8);
   printf("The sum is :%d ", result);

   // Calling ascii function from main whose return type is int

   char result = asciicharacter(97);
   printf("The ascii is :%c ", result);

   int fact = factorial(5);
   printf("The factorial of 5 is  %d", fact);

   printHello();

   int a = 3;
   printf("%d %d %d\n", a, ++a, a++);

   return 0;
}