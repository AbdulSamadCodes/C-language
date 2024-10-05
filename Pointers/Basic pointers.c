#include <stdio.h>

int main() {
    
    // int a = 10;
    // int *ptrint = &a;//address of a
    
    //This will be same
    // printf("%d\n" , ptrint);
    // printf("%d\n",&a);
    
    //When printed with * it gives the value at that address
    // printf("%d\n",*ptrint);
    
    //Derefrencing

    // *ptrint = 20;
    // printf("The value of a now is :%d\n" ,a);
    
    //Pointer arithemetic
    
    //  printf("%d\n" , ptrint);
    //  ptrint++;
     //It will be  incremented by 4 because  size of int is 4
    //  printf("Now the value of pointer is %d\n",ptrint);
     
     //Now printing value at incremented pointer
    //  printf("%d\n",*ptrint);
    
    //Pointer types are necessary because all data types are 
    //stored differently in memory
    
    // int a = 1025;
    // int *ptra = &a;
    
    // printf("Address of a is: %d\n" , ptra);
    // printf("Value of a is :%d\n",*ptra);
    
    // char ch = 'a';
    // char *charptr = &ch;
    
    // printf("Address of ch is: %d\n" , charptr);
    // printf("Value of a ch :%c\n", *charptr);
    
    //And now we typecast a int pointer to char pointer
    
    // charptr = (char*)ptra;
    // printf("Now charptr is %d\n" , charptr);

    //===============Pointer to pointer================

    // int x = 5;
    // int *p = &x;

    // int **p_ptr = &p;

    // int ***p_doubleptr = &p_ptr;
    
    // printf("The value of pointer *p is %d\n", p);
    // printf("The value of pointer *p_ptr is %d\n", p_ptr);
    // printf("The value of pointer *p_doubleptr is %d\n", p_doubleptr);
    
    //Defrencing pointer ro pointers
    // printf("The value of pointer *p is %d\n", *p);
    // printf("The value of pointer *p_ptr is %d\n", **p_ptr);
    // printf("The value of pointer *p_doubleptr is %d\n", ***p_doubleptr);
    
    //We are modifying x now by triple pointers
    
    // ***p_doubleptr = 10;
    // printf("The value of x now is %d\n" ,x);

    return 0;
}