// Function to calculate the nth triangular number

#include <stdio.h>

// Declare functions
void calculateTriangularNumber (int);

int main(void) {

  // Use function
  calculateTriangularNumber (10);
  calculateTriangularNumber (20);
  calculateTriangularNumber (50);
  
  return 0;
}

// Define functions
void calculateTriangularNumber (int number) {
  // Initialize triangular number
  int triangularNumber = 0;

  // Calculate triangular number
  for (int i = 1; i <= number; i++) {
    triangularNumber += i;
  }

  // Print triangular number
  printf ("Triangular number %d is %d\n", number, triangularNumber);
}