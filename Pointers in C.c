# include <stdio.h>

int main(){

  //============A  pointer is variale which can store the address of a variable as its value.the size of a pointer is 8=========

  //Prints the address of the variable age
 
   int age = 20;
    //Declaration of a pointer
    int* age_ptr = &age;
    
    //printing the value of  age
    
    printf("%d\n" ,age );
    
    //printing the address of age variable
    printf("%u\n",&age);
    
    //printing the value of pointer varaible to age
    
    printf("%p\n" , age_ptr);

    printf("Size of pointer is : %d\n" , sizeof(age_ptr));//Output:8


    //=======The pointer to a pointer is used when when we want to  store the address of the pointer itself.

    char* chr = 'a';
    
    int** ptr_ptr_chr = &chr;
    
    printf("%p\n" , ptr_ptr_chr);
    
    printf("%d" , sizeof(ptr_ptr_chr));

    return 0;
}