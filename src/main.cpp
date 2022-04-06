/**
 * This program attempts to take in numbers on the command line and then print them
 * in sorted ascending order
 */


#include <cstdio>
#include <cstdbool>
#include <cstdlib>
#include "sorting.h"
#include "formatting.h"

int main(int argc, char* argv[]){

  int* given_numbers;
  given_numbers = new int[argc-1];
  int len;
  //readcommand(given_numbers, argv + 1, argc - 1);
  parse_args(argc, argv, given_numbers, &len);
  int* sorted_ar = get_sorted(given_numbers, len);

  printf("The numbers you entered are: ");
  print_ar(given_numbers, len);
  printf("\n");

  printf("After sorting the numbers we have: ");
  print_ar(sorted_ar, len);
  printf("\n");

  return 0;

}



