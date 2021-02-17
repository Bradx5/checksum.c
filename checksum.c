/********************************/
/* Program Name:                */
/* Author:                      */
/* Date:                        */
/********************************/
/* Description:                 */
/* Validation Checks:           */
/* Enhancements:                */
/********************************/

#include "stdio.h"
#include "stdlib.h"
#include <sys/types.h
#include <unistd.h>

#define max_int (255)
#define byte unsigned char

int main (int argc, char * argv[], char ** envp) {




int c;
int count = 10;
int sum = 0;
 //int fd;
  byte checksum; 
  byte complement;
    //fd = open(STDIN_FILENO, O_RDONLY);
  
 // int *p = (int *) &buffer;


  byte header[10]

read(STDIN_FILENO, &header, 10);

 for (c = 0; c <= count ; c ++);
 {
 if (c == 5) 
 {
   checksum = header[c];
   header[c] = 0;
 }
sum += header[c];
{
if (sum > max_int)
sum = 0;
 }}
complement = max_int - sum;


  fprintf(stdout, "Stored Checksum: %d, Computed Checksum: %d\n", checksum, complement);
  if (checksum != complement ) {
    fprintf(stderr, "Error Detected!\n"); 
    return 1;
  }
  return 0;
}
//https://github.com/Bradx5/checksum.c
