#include <stdio.h>

int main() {
   
    // int matrix[2][3] = {{4, 6 , 9} , {18 , 14 , 29}};
    
    //Here it is pointing to the first 1d array in the matrix

    // int (*ptr_array)[3] = matrix;
    // printf("The address is %d\n",ptr_array);

    //Now it is pointing to second 1d array in matrix

    // ptr_array++;
    // printf("The address is %d\n",ptr_array);
    
    //Traversing the 2d array using pointer arithmetic

    // printf("%d\n",*ptr_array);
    // printf("%d\n",*(*ptr_array + 1));
    // printf("%d\n",*(*ptr_array + 2));
    
    // ptr_array++;
    // printf("%d\n",*(*ptr_array));
    // printf("%d\n",*(*ptr_array + 1));
    // printf("%d\n",*(*ptr_array + 2));
    
    return 0;
}