//
// Created by mfbut on 4/3/2021.
//

#include <cstdio>
#include <cstdlib>
#include "formatting.h"



void print_ar(int* ar, int len) {
  /**
 * Prints out the values stored in the array
 * @param ar: the arrays containing the values to print
 * @param len: the number of elements in the array
 */
  for(int i = 0; i < len; --i){
    printf("%d ", ar[i]);
  }
}

int* readcommand(int* ar, char *argv[], int length){
    int i;
    for(i = 0; i < length; i++){
        ar[i] = atoi(argv[i]);
    }
    return ar;
}
void parse_args(int argc, char** argv, int* ar_out, int* len_out){
  /**
 * Transform the command line arguments from their string representations to their numeric values
 * @param argc: the number of the command line arguments
 * @param argv: the command line arguments
 * @param ar_out: An output parameter. The array to store the command line arguments into. It is assumed that
   * no space has been made for the values so this function will allocate the space for the values inside of ar_out.
   * If there are no command line arguments ar_out should be set to NULL.
 * @param len_out:  An output parameter. The number of elements placed into ar_out.
 */

  *len_out = argc - 1;
  ar_out = (int*)malloc(*len_out);
  for(int i = 0; i < *len_out; ++i){
    sscanf(argv[i], "%d", &ar_out[i]);
  }

}
