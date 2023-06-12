#include <stdio.h>
#include <stdlib.h>

int main() {
  int number;

  printf("Enter an integer: ");
  scanf("%d", &number);


  switch (number % 2) {
    case 0:
      printf("The number is even.\n");

      break ;


    case 1:
      printf("The number is odd.\n");
      break;
  }

  return 0;
