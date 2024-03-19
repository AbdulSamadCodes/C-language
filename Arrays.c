# include <stdio.h>

int main(){

     //An array in C is a fixed-size collection of similar data items stored in contiguous memory locations.
    
    //Making an int array of  4 elements
    
    int  marks[4];
    
    //storing elements in array 
    marks[0] = 34;
    marks[1] = 78;
    marks[2] = 90;
    marks[3] = 67;
    
    //Accessing elements of array
    printf("%d\n" ,marks[0]);
    printf("%d\n" ,marks[1]);
    printf("%d\n" ,marks[2]);
    printf("%d\n" ,marks[3]);
    
    //==========Taking user inputs in array========
    
    float percentages[5];
    
    for(int i = 0 ; i < 5 ; i++){
        printf("Enter the percentage for student %d\n" , i + 1);
        scanf("%f" , &percentages[i]);
    }
    //Now printing the array elements
     for(int i = 0 ; i < 5 ; i++){
        printf("Percentage of student %d is %f \n" , i + 1 , percentages[i]);

    //We can also decalre arrays like this
    
    char operator [] = {'a' , 'b' , 'c' , 'd'};
    printf("%c\n" , operator[1]);
    
    int arr[3] = {10 , 23 , 45};
    printf("%d\n" , arr[1]);

    return 0;
}