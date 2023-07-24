#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Seed the random number generator with the current time.
  time_t t;
  srand(time(&t));

  // Generate a random password of length 10.
  char password[10];
  for (int i = 0; i < 10; i++) {
    password[i] = rand() % 95 + 32; // Generate a random character between ' ' and '~'.
  }

  // Print the password.
  printf("%s\n", password);

  return 0;
}
