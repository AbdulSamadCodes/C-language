# include <stdio.h>

int Add(int a , int b) {
    int result = a + b;
    return result;
}

void printName(char* name) {
   printf("Hello %s\n",name);
}

int main(){
    
    int num1 = 20;
    int num2 = 40;

    int (*p)(int , int) = *Add;
    int sum = (*p)(num1 , num2);
    printf("The value of sum is : %d\n ",sum);

    void (*ptr)(char*) =  &printName;
    char name[] = "Samad";
    ptr(name);


    return 0;
}