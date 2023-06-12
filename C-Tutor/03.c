#include <stdio.h>
#include <stdlib.h>

int main() {

  float radius, circumference, area, volume;
  int choice;


  printf("Select an operation:\n");
  printf("1. Calculate the circumference of a circle\n");
  printf("2. Calculate the area of a circle\n");
  printf("3. Calculate the volume of a sphere\n");
  printf("4. Exit\n");


  scanf("%d", &choice);


  if (choice == 4) {
    return 0;



  printf("Enter the radius: ");
  scanf("%f", &radius);


  switch (choice) {

    case 1:
      circumference = 2 * 3.14 * radius;
      printf("The circumference is %f\n", circumference);
      break;

    case 2:
      area = 3.14 * radius * radius;
      printf("The area is %f\n", area);
      break;


    case 3:
      volume = (4 / 3) * 3.14 * radius * radius * radius;
      printf("The volume is %f\n", volume);
      break;


    default:
      printf("Invalid choice!\n");
      return 0;
  }

  return 0;
}
}
