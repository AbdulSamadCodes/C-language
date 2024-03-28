//Write a method print  to traverse a character array

void print(char *C)
{
   int i = 0;
    
    while(*(C + i) != '\0'){
      printf("%c", *(C + i) );  
      i++;
    }
}

int main() {
    // Character arrays  in c have to be terminated by a null character '\0';
    
  char name[6] = {'S' , 'a' , 'm' , 'a' , 'd' , '\0'};
    // printf("%s\n" , name);
    
    //A pointer to a character array
   char *name_ptr = name;
    // printf("The address of string is :%d\n" , name_ptr);
    // printf("The value of first index is :%c\n",*(name_ptr));
    // name_ptr++;
    // printf("The value of second index is :%c\n",*(name_ptr));
    // name_ptr++;
    // printf("The value of third index is :%c\n",*(name_ptr));
    // name_ptr++;
    // printf("The value of fourth index is :%c\n",*(name_ptr));
    // name_ptr++;
    // printf("The value of fifth index is :%c\n",*(name_ptr));
    // name_ptr++;
    
    //Caling our custom print  method
    print(name);

     //Making contant strings
    char *constant_string = "Hello";
    printf("I am a string conatnt:%s\n" , constant_string);
    //If we tries to modify the constant string,we get error
    
    constant_string[0] = 'K';//Error
    
    return 0;
}