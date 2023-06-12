#include <stdio.h>
#include <stdlib.h>

int main() {

  int num1, num2, operator, result;


  printf("Select an operation:\n");
  printf("1- Addition\n");
  printf("2- Subtraction\n");
  printf("3- Multiplication\n");
  printf("4- Division\n");
  printf("5- Exit\n");

    scanf("%d", &operator);


  if (operator == 5)

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);


  switch (operator) {

    case 1:
      result = num1 + num2;
      break;

    case 2:
      result = num1 - num2;
      break;

    case 3:
      result = num1 * num2;
      break;

    case 4:
      if (num2 == 0)
        printf("Division by zero!");


      else
        result = num1 / num2;

      break;
    default:

      printf("Invalid operator!");
      return 0;
  }


  printf("%d %c %d = %d\n", num1, operator, num2, result);

  return 0;

}

