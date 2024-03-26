#include <stdio.h>

int Sum(int *nums ,int  size)
{
   int sum = 0; 
   for(int i = 0 ; i < size ; i++){
     sum+=nums[i];
   }
   return sum;
}

int main()
{
    int nums[5] = {10, 12, 13, 19, 29};

    //  int *ptrArray = &nums;
    // Or we can simpy do that
    int *ptrArray = nums;

    // It will point to the  first index of the array
    printf("The pointer to array  is %d\n", ptrArray);

    // This will be the first index of the array
    printf("The value of pointer to array  is %d\n", *ptrArray);

    ptrArray = ptrArray + 1;
    // Similarly we can print the whole array

    printf("The value of pointer to array num is %d\n", *ptrArray);
    ptrArray = ptrArray + 1;
    printf("The value of pointer to array num is %d\n", *ptrArray);
    ptrArray = ptrArray + 1;
    printf("The value of pointer to arra+y num is %d\n", *ptrArray);
    ptrArray = ptrArray + 1;
    printf("The value of pointer to array num is %d\n", *ptrArray);

    //=======Arrays and functions=========

   int numbers[] = {10 , 20 , 30 ,40};
   int size = sizeof(numbers) / sizeof(numbers[0]);

   int total = Sum(numbers, size);
   printf("The total is %d\n" , total);

   return 0;
}