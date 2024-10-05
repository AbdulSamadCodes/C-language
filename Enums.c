#include <stdio.h>

enum Level{
  LOW = 20,
  MEDIUM = 40,
  HIGH = 60
};

int main() {
  enum Level level = MEDIUM;

  switch(level) {
    case 20:
      printf("Level is low");
      break;
    case 40:
      printf("Level is medium");
      break;  
    case 60:
      printf("Level is high");
      break;
    default:
      printf("Level is unset");              
  }

  return 0;
}