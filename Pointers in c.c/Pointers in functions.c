# include <stdio.h>

void increment(int *a){
  //Here we derefrence the address from the paramenters
  *a = *a + 1;
}

int main(){
   
  int a = 10;
  printf("The value of 10 now is %d\n" , a); 

  //we passed the refernce of a to increment function
  increment(&a);

  printf("The value of 10 now is %d\n" , a); 

  return 0;
}
