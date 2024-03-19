# include <stdio.h>
#include <string.h>

// void slice(char *str , int start , int end){
//     int i = 0;
//     while((i + start) < end){
//         str[i] = str[i + start];
//         i++;
//     }
    
//     str[i] = '\0';
// }

int main(){
   
    //A string in C is merely an array of characters. The length of a string is determined by a terminating null character: '\0' . So, a string with the contents, say, "abc" has four characters: 'a' , 'b' , 'c' , and the terminating null ( '\0' ) character.

    //We can create a string like this

    char name[]  = {'S' , 'a' , 'm' , 'a' , 'd' , '\0'};

    //We can access characters in a string like this
    printf("%c" , name[1]);

    //We can also make a string like this

    char name2[] = "Ahmed";
    printf("%c\n" , name[2]);

    //To print whole string, we can use %s specifier

    printf("%s" , name);

    //========Looping through strings=============

    int length = sizeof(name) / sizeof(name[0]);
    for(int i = 0 ; i < length ; i++){
        printf("%c" , name[i]);
    }

   //We can also loop using pointer

   char city []  = "Karachi";
   char* ptr = &city;

   while(*ptr != '\0'){
      printf("%c" , *ptr);
      ptr++;
   }

   //===========Taking string input from user========

   char country[40];
   printf("Enter your coutry name\n");
   scanf("%s" , country);
   printf("User enter %s\n" , country);

   //scanf cannot be used with multi word strings with empty spaces

   //===========gets and puts================

   char country[40];
   printf("Enter your country\n");
   gets(country);
   puts(country);

   //Once a string is initialized , it cannot be reinitialized.
   //A string made with pointer can be reinitialized

   //==========Some Library functions of strings==============

  //strlen gives the length of the string exluding null character
   char name[] = "Samad";
   printf("The length is: %d\n" ,strlen(name));

   
  //strcpy  copies the content of  second string into the first string passed to it;

  char str2[] = "Samad";
  char str1[30];
  strcpy(str1 , str2);
  printf("%s\n" , str1);

  //strcat is used to concatanete two strings;

  char str1[] = "Samad";
  char str2[] = " Abdul";
  strcat(str1 , str2);
  printf("Now str1 is %s\n" , str1);


  //strcmp is used to comapre two strings.It returns 0  if string both strings are equal.It gives a
  //if ascii of first mismatch character is greater than ascii of first mismatch character of str2.
  //positive value
     
///   char str1[] = "Samad";
//   char str2[] = "Sbmgc";
  
//   int res = strcmp(str1 , str2);
//   printf("%d\n" , res);Output:-1
  
   
//   char str1[] = "Samad";
//   char str2[] = "Samad";
  
//   int res = strcmp(str1 , str2);
//   printf("%d\n" , res);Output:0
  
     
//   char str1[] = "Scmad";
//   char str2[] = "Samad";
  
//   int res = strcmp(str1 , str2);
//   printf("%d\n" , res);Output:2

//======================Practise problem=============

//Write your own custom application of slice function to slice a string from given start index to given end index

//  char string[] = "Pakistan";
//   slice(&string ,3,6);
//   printf("%s" , string);
  
return 0;
}