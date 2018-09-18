#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
  unsigned long seed_time = time(NULL);
  srand(seed_time);
  printf("The seed for this run is: %lu\nUse this to configure for problems.\n", seed_time);
  int ray[10];
  int i;

  for(i = 0; i < 8; i++){
    *(ray + i) = rand();
  }
  *(ray + 9) = 0;

  printf("Printing values in array 1:\n");
  for(i = 0; i <= 9; i++){
    printf("*(ray + %d): %d \n", i, *(ray+i));
  }

  printf("Printing values in array 2:\n");
  int ray2[10];
  for(i = 0; i < 9; i++){
    *(ray2 + i) = *(ray + (9-i));
    printf("*(ray2 + %d): %d \n", i, *(ray2+i));
  }


  return 0;
}
