# include <stdio.h>
#include <stdlib.h>

 int* Add(int *a , int *b) {
   int c = (*a) + (*b);
   return &c;
}

int* dynamicAdd(int *a , int *b){
    //Now we will be alloaating memory dynamically
    int *c = (int*)malloc(1 * sizeof(int));

    *c = *a + *b;
    return c;
}


int main() {
    int num1 = 10;
    int num2 = 20;
    // int *sum_ptr = Add(&num1 , &num2);

    //Sum_ptr will have undefined behaviour because memory is deallocated to local variable c
    // printf("The vakue of sum_ptr is " , *sum_ptr);

    //Now we will have to do dynamic memory allocation

    // int *total = dynamicAdd(&num1,&num2);
    // printf("The value of total is %d\n",*total);

       
    return 0;
}