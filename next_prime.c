#include <stdio.h>
#include <stdlib.h> // for strtol
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

/*
  Prime Number: a number that is divisible only by itself and 1 (e.g. 2, 3, 5, 7, 11).
  This program, prints the prime numbers that exists from x to y inclusive. 
  By default it will check the next 10 numbers, but you can change it.

  ie. 
  ./next_prime
  from: 4 
  5 - 7 - 11 - 13 
  Because, within the next 10 numbers from the start 4, the prime numbers are only 5, 7, 11 and 13.
  ie. 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14. The primes are 5, 7, 11 and 13.

  To change the numbers you need start the program with ./next_prime z
  where the z is the quantity of numbers you wanna check to find the prime numbers.
  To see a larger list you can user the the new size of the list when starting the program
  ie.
  ./next_prime 100
  from 4
  5 - 7 - 11 - 13 - 17 - 19 - 23 - 29 - 31 - 37 - 41 - 43 - 47 - 
  53 - 59 - 61 - 67 - 71 - 73 - 79 - 83 - 89 - 97 - 101 - 103
  Because, within the next 100 numbers from the start 4, the prime numbers are only 
  5 - 7 - 11 - 13 - 17 - 19 - 23 - 29 - 31 - 37 - 41 - 43 - 47 - 
  53 - 59 - 61 - 67 - 71 - 73 - 79 - 83 - 89 - 97 - 101 - 103.
*/

// Declare functions prototype
bool check_argument(char *arg);
bool check_number(char *key);

int main(int argc, char *argv[])
{

  // Validate command_line argument
  if (argv[1] != NULL && !check_argument(argv[1]))
  {
    return 1;
  }
  // Set numbers over
  int numbers_over = (argc == 2) ? strtol(argv[1], NULL, 10) : 10;

  int start_number;
  printf("from: ");
  scanf("%i", &start_number);
  int arr[numbers_over];
  int index = 0;
  int f = 0;

  printf("To: %i\n", numbers_over);
  printf("Primes: ");

  for (int i = 0; i < numbers_over; i++)
  {
    f = 0;
    for (int j = 1; j < (start_number - 1); j++)
    {
      if (start_number % (start_number - j) == 0)
      {
        //printf("%i is not a prime number\n", start_number);
        f = 1;
        break;
      }
    }
    // if (x == 1)
    // {
    //   printf("%i is not a prime number\n", x);
    // }
    if (f == 0 && start_number != 1)
    {
      // printf("%i is prime\n", start_number);
      arr[index++] = start_number;
    }
    start_number++;
  }

  for (int i = 0; i < index - 1; i++)
  {
    printf("%i - ", arr[i]);
  }
  printf("%i\n", arr[index - 1]);
  return 0;
}

// Validate argument / number
bool check_argument(char *argumentV)
{
  int length = strlen(argumentV);

  // Check if the user input only digits
  if (!check_number(argumentV))
  {
    printf("Number must be a positive integer and must contain only digits\n");
    return false;
  }

  return true;
}

// Function to check if the user input contains only digits
bool check_number(char *argument)
{
  int length = strlen(argument);

  // Check every character of the input if one is letter return false
  for (int i = 0; i < length; i++)
  {
    // isdigit() is a function from ctype.h that returns a boolean true if is a number and false if not
    if (!isdigit(argument[i]))
    {
      return false;
    }
  }
  return true;
}