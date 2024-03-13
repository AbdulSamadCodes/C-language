
# include <stdio.h>

int sum(int a , int b){
    
  a = 98;
  b = 67;
  int c = a + b;

  //Now changing the values of copy variables
  return c;
}

void swapByValue(int x ,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapByReference(int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

//===========Call by value

//   int num1 = 7;
//   int num2 = 8;
  
//   int ans = sum(num1 , num2);
//   printf("%d" , ans);
  
//   printf("num1 is : %d , num2 is :%d" ,num1 , num2);

//==============Call by reference==============

//Suppose we have two variables and we want to swap them using 
//a function

int a = 10; 
int b = 20;

swapByValue(a , b);

//Will not swap because copy was pass into the function
printf("The value  of  a is %d and b is %d\n" , a , b);

//Now we are passing the actual address or reference of num1 and num2
swapByReference(&a , &b);

printf("The value  of  a is %d and b is %d" , a , b);

  return  0;
}