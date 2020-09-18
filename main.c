// Author: Yue Wu yzw5627@psu.edu
// Collaborator: Michael Artlip mva5905@psu.edu
// Collaborator: grace lavin  gcl5087@psu.edu
// Collaborator: Shiao Zhuang sqz5328@psu.edu 
// Section: 1
// Breakout: 18


#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h> 

int sum_n(int n){
  if(n == 0){ 
    return 0 ;
  }
  else{
    return sum_n(n-1) + n;
  }
}
void print_n(const char *s, int n){
  if (n == 0){ 
    return; 
  }
  else{
    printf("%s\n", s);
    print_n(s,n-1);
  }
}
int main(void) {
  char *g = readline("Enter an int: ");
  int a = atoi(g); 
  printf("sum is %d.\n", sum_n(a));
  char *h = readline("Enter a string: ");
  print_n(h, a);
  return 0;
}