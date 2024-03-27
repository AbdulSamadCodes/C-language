# include <stdio.h>

int main(){

  //A file pointer is used for opening a file;

  // FILE *ptr;

  //File pointer takes two arguments (file name , mode)

  //Primarily used modes are
  //"r" - for reading a text file
  //"rb" - for reading a binary file
  //"w" - for writing in a text file
  //"wb"- for writing in a binary file
  //"a" - for appending in a file


  //=========Reading a text file=============

  //   int num;
  //   int num2;
  //   ptr = fopen("sample.txt","r");
  //   fscanf(ptr,"%d",&num);
  //   printf("The value of num is",num);
  //   fscanf(ptr,"%d",&num2);
  //   printf("The value of num2 is",num2);
  //   fclose(ptr);
  
  //Write a program which checks whether the file we  are reading exists or not
  
//    ptr = fopen("sample.txt","r");

//    if(ptr == NULL){
//      printf("The file does not exists");
//     } else{
//      printf("The file exists");
//     } 

  //============Writing to a text file============

  // ptr = fopen("name.txt" , "w");
  // char name[] = "Samad";
  
  // fprintf(ptr,"My name is %s",name);
  // fclose(ptr);

  //=========Appending to a text file======

  // char university[] = "PAF KIET"; 
  // ptr = fopen("name.txt","a");
  
  // fprintf(ptr," and my university is %s " , university);

  return 0;
}
