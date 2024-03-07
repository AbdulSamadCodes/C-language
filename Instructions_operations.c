# include <stdio.h>
# include <math.h>

//======A C program is a set of instructions===========

//=====Types of instructions=====

// /*:Type declaration instructions *:Arithmetic instructions *:Control instructions

int main()
{

   
   //=========Sizes of datatypes in C===========

//    int size_of_int = sizeof(int);
//    int size_of_double = sizeof(double);
//    int size_of_char = sizeof(char);
//    int size_of_float = sizeof(float);

//    printf("Size of int is %d\n" , size_of_int );//4 bytes
//    printf("Size of double is %d\n" , size_of_double );//8 bytes
//    printf("Size of  char is %d\n" , size_of_char );//1 byte
//    printf("Size of float is %d\n" , size_of_float );//4 bytes

    //========================Type declaration instructions==========================

    // int j = 10;
    // int i = j;

    // printf("%d" , i);

    //===This will throw an error as we are trying to access a before declaration as C language executes instructions line by line==
    // float percent = 60.3 + a;
    // a = 10.7;

    //==========num2 and num3 will be assigned value of num======
    // int num = 10;
    // int num2;
    // int num3;
    // num2 = num3 = num;
    // printf("%d\n%d\n%d\n" , num , num2 , num3);


    //========================Arithemetic instructions==========================

    //Basic arithemetic operators are + , - , / , * , %

    //  int num1 = 20;
    //  int num2 = 15;

    //  printf("The value of a + b is %d\n" , num1 + num2);
    //  printf("The value of a - b is %d\n" , num1 - num2);
    //  printf("The value of a * b is %d\n" , num1 * num2);
    //  printf("The value of a / b is %d\n" , num1 / num2);
    //  printf("The value of a % b is %d\n" , num1 % num2);

    //There is no operator in C to perform exponentiation.We can use pow() function of <math.h> preprocessor

    // printf("The value of 5 to the power of 3 is %f" , pow(5 , 3));

    //====================Type conversions in C============================

    //=======Implicit type conversions=======

    //===float to int conversion====

    // int x = 21;
    // float f = 10.5;

    // printf("The  value is %f" , x + f);

    
     //===char to int conversion====

    //  char a = 'a';
    //  int  x = 20;

    //  printf("The value is %d", a + x);
    //Ouput will be 117 beacuse character is converted to ascii value

    
   //===========Explicit type conversions============

   //=====int to float====
   
    // int x = 10;
    // float y = (float)x;
    // printf("%f" , y);

  //=====float to int=======

//   float a  = 10.5;
//   int n = (int)a;
//   printf("%d" , n);

//=====double to int=======

//   double d =18.5678543;
//   int  n = (int)d;
//   printf("%d" , n);

//=====int to char=======

// int num = 100;
// char charNum = (char)num;
// printf("%c" , charNum);


//=====char to int=======

// char  hash = '#';
// int hashint = (int)hash;
// printf("%d" , hashint);


//==============Precedence of  operators=========

// Instructions  written in brackets() have the highest precedence

//:Highest : * , /  , %
//:Secondhighest : - , + 
//:Lowest: =

//======If two operators are of same precedence then  asscocitivity is followed===========

//=== * / follows  left to right associtivity

return 0;
}

