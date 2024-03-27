#include <stdio.h>
#include <stdlib.h>

int main()
{

    // int *ptr;

    // malloc function

    // Creating an array of size 4
    //  ptr = (int *)malloc(4 * sizeof(int));

    //  for(int i = 0 ; i < 4 ; i++){
    //    printf("Enter the value of %d\n",i + 1);
    //    scanf("%d" , &ptr[i]);
    //  }

    //  for(int i = 0 ; i < 4 ; i++){
    //    printf("%d" , ptr[i]);
    //  }

    // calloc function
    // calloc  initializes 0 to every value by default

    //   float* ptr;

    //   ptr = (float*)calloc(4 , sizeof(float));

    //   for(int i = 0 ; i < 4 ; i++){
    //     printf("Enter the value of %d\n",i + 1);
    //     scanf("%f" , &ptr[i]);
    //   }

    //   for(int i = 0 ; i < 4 ; i++){
    //     printf("%f" , ptr[i]);
    //   }

    // free function

    // free() is used for deallocating memory

    // Now the above ptr is deallocated from the memory
    //  free(ptr);

    //realloc function()

    // ptr = realloc(ptr , 10  * sizeof(float));

    // for(int i = 0 ; i < 10 ; i++){
    //   printf("Enter value again for number %d\n" , i + 1);
    //   scanf("%f" , &ptr[i]);
    // }

    // for(int i = 0 ; i < 10 ; i++){
    //   printf("%f\n" , ptr[i]);
    // }

    return 0;
}
