#include "include_guards1.h"
#include "include_guards1.h"

void print_argv(int argc, const char *argv[]){
  printf("Number of args: #%i\n", argc);
  int i = 0;
  for (i = 0; i < argc; i++)
  {
    printf("Args #%i is: %s\n", i, argv[i]);
  }
}

int main(int argc, const char *argv[]){
 
  print_argv(argc, argv);

  if(argc == 0){
    printf("I don't have enough argumnets!\n");
    return 0;
  }

  double a = atof(argv[1]);