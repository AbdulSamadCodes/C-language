# include <stdio.h>
# include <string.h>

//he structure in C is a user-defined data type that can be used to group items of possibly different types into a single type. The struct keyword is used to define the structure in the C programming language. The items in the structure are called its member and they can be of any valid data type.

struct employee{
   int code;
   float salary;
   char name[10];
};

struct Person{
   int code;
   float salary;
   char name[5];
};

struct Computer{
    int codeNo;
    float price;
    char name [30] ;
};

void Show(struct employee emp){
  printf("The code is %d\n",emp.code);
  printf("The price is %f\n",emp.salary);
  printf("The name is %s\n",emp.name);
}

int main(){
    
    struct employee e1;
    e1.code = 100;
    e1.salary = 30000.45;
    strcpy(e1.name,"Samad");

    //We can alos initialize structures like that

    struct Person p1 = {100 , 34.23 , "Harry"};
    
    printf("Code is %d\n",p1.code);
    printf("Code is %f\n",p1.salary);
    printf("Code is %s\n",p1.name);

    //We can also initialize pointers to structures

    //We can also initialize pointers to structure
    struct Computer comp;
    struct Computer *ptr;
    
    ptr = &comp;
    (*ptr).codeNo = 1567;
    
    //We can also initialize like that
    ptr -> price  = 456.89;
    strcpy((*ptr).name,"Windows PC 11");
    
    printf("Code is %d\n",(*ptr).codeNo);
    printf("Price is %f\n",(*ptr).price);
    printf("Name is %s\n",(*ptr).name);

    //Passing structure to function
    Show(e1);

    return 0;
}