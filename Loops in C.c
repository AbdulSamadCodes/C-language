
# include <stdio.h>


int main(){

  // Primariily , there are  three types  of loops in C.

  // :while loop :do-while loop :for loop

  //==========================while loop=========================//

   int a;
   scanf("%d" , &a);

   while (a >10){
     printf("Value of a is %d\n" , a);
     a++;
   }

   //If the condition never becomes false . the while loop will keep executing

   int a = 20;

   //This will run infinitely because non-zero value is considered true in C.
   while(a)  {
      printf("I will run infinitely");
   }

   //Write a program which takes a number as input and prints 
    //reverse counting from number to 0.
    
    int number;
    printf("Enter number: ");
    scanf("%d" , &number);
    
    while(number >= 0)
    {
        printf("%d\n" , number);
        number--;
    }

   //==================do while  loop=======================

   // while loop which executes atleast once and then check the condition.
    
   int num = 34; 
   
   //Code in the do block will be executed once even if the condition in false.
   do{
       printf("I will be executed once even if condition is false");
   } while (num < 34);

   
   //If the condition never becomes false . the while loop will keep executing

   //==================for  loop=======================

   //Q:Write  a program to  check whether the number is prime or not using for loop
 
   int num;
   printf("Enter the number : " );
   scanf("%d" , &num);
   
   int count = 0;
   for(int i = 1 ; i * i <= num ; i++)
   {
       if (num % i == 0)
       {
        count+=1;
        if(num / i != i){
            count+=1;
         }
       }
   } 

   if(count == 2 ){
    printf("The number %d is prime" , num);
   }
   else{
     printf("The number %d is not prime" , num);
   }

   //=============break keyword==================

   //break keyword is used to completely break the loop.

   int number = 10;
   for(int i = 0  ; i <= number ; i++)
   {   
       //When i will have 4 the loop will  completely break
       if(i == 4){
        break;
       }
       printf("%d\n" , i);
   }

    //continue keyword is used to skip the current iteration of the loop

       int number = 10;
       for(int i = 0  ; i <= number ; i++)
       {
           //When i will have 4 it will jump to the next iteration
           if(i == 4){
           continue;;
         }
         printf("%d\n" , i);
     }   
   return 0;
}

