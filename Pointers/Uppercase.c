#include <stdio.h>

void uppercase(char *word) 
{
  word[0] = (char)(word[0] - 32);
}

void uppercase_first_letter(char *words_array[30],void (*uppercase)(char *letter)) 
{
   printf("Hello");  
}

int main(int argc, char const *argv[])
{ 
  char words_array[4][30]  = {
    {'l','i','o','n'},
    {'c','a','t'},
    {'d','o','g'}
  };

  char *array_ptr[4] = &words_array;

  void (*uppercase_ptr)(char *letter)  = &uppercase;
  uppercase_first_letter(array_ptr,uppercase_ptr);

  return 0;
}
