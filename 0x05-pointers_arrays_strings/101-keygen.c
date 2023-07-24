#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

void generate_password(char *password) {
  char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+{[]}\|;:'\",./?";
  int i;

  srand(time(NULL));

  for (i = 0; i < PASSWORD_LENGTH; i++) {
    password[i] = characters[rand() % (sizeof(characters) - 1)];
  }
}

int main() {
  char password[PASSWORD_LENGTH];

  generate_password(password);

  printf("Your password is: %s\n", password);

  return 0;
}
