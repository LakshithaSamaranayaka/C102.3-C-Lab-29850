#include <stdio.h>
#include <stdlib.h>

int main() {

  char ch;

  printf("Enter a character: ");
  scanf(" %c", &ch);


  switch (ch) {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

      printf("The character is a vowel.\n");
      break;
    default:

      printf("The character is not a vowel.\n");
      break;
  }

  return 0;
}
