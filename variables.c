
# include <stdio.h>

//===A variable is a container for storing values and these values can be changed=========.

//==============Rules for naming variables in C===========.

//:First character must be an alphabet or underscore
//:No commas , blanks allowed
//:No special symbol other than underscore
//:Variable names are case sensitive


//=============A constant is a container of value whose value cannot be changed============

//There are three types of constants.

//: *:Character constant *:Integer constants *:Real constants

//==========Keywords are reserved words defined in C================

//=================Some rules of a general C program===============

//:Every program execution starts from main function
//:All the statements are terminated with a semicolon
//Instructions are case sensitive
//Instructions are executedin the same order in ehich they are written

//==============Comments in C=================

// is used for single lne comment. /* */ is used for multiline comments


//==============Library functions=================

//====Format specifiers====

//===%d for int
//%f for float
//%c for char

int main()
{
    int num = 9;
    printf("The value of num is %d \n" , num);

    float percentage = 70.6;
    printf("The value of percentage is %f \n" , percentage);

    char comma = ',';
    printf("The value of percentage is %c" , comma);

    // ======Write a program to add two numbers===========

    int num1 = 20;
    int num2 = 80;
    int result = num1 + num2;

    printf("The output is %d" , result);



   //===============Taking user input=================

   int age;
   printf("\nEnter your  age:\n");

   //& is used for referencing the address of variable
   scanf("%d" , &age);
   
   printf("Your age is : %d\n\n" , age );


   //=======Write a program to convert celsius to farhenheit=======

   int celsius = 40;

   float farhenheit = (celsius  * 9 / 5) + 32;

   printf("%d celisius in farhenheit is %f" , celsius , farhenheit);

   return 0;
}










