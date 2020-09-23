#include <stdio.h>
#include <stdlib.h> // for strtol
#include <stdbool.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>

/*
  Prime Number: a number that is divisible only by itself and 1 (e.g. 2, 3, 5, 7, 11).
  This program, will check if the user imput is a prime number or not.
*/

// Declare functions prototype
bool check_argument(char *input_check);
bool check_number(char *num);

int main(void)
{

  // Get input from user as a string
  char input[255];
  printf("Number: ");
  scanf("%s", input);

  // Validate input number
  if (!check_argument(input))
  {
    return 1;
  }

  // Parse string input to number
  int number = strtol(input, NULL, 10);

  // Check if the number is prime or not and print the result
  for (int i = 1; i < number - 1; i++)
  {
    if (number % (number - i) == 0)
    {
      printf("%i is not a prime number\n", number);
      return 0;
    }
  }

  printf("%i is a prime number\n", number);

  return 0;
}

// Validate input
bool check_argument(char *input_check)
{

  // Check if the user input only digits
  if (!check_number(input_check))
  {
    printf("Number must be a positive integer and must contain only digits\n");
    return false;
  }

  return true;
}

// Function to check if the user input contains only digits
bool check_number(char *num)
{
  int length = strlen(num);

  // Check every character of the input if one is letter return false
  for (int i = 0; i < length; i++)
  {
    // isdigit() is a function from ctype.h that returns a boolean true if is a num and false if not
    if (!isdigit(num[i]))
    {
      return false;
    }
  }
  return true;
}