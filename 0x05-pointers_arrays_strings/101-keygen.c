#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15
#define CORRECT_PASSWORD "Tada! Congrats"

void generate_password(char *password) {
  char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+{[]}|;:'\",./?";
  int i;

  srand(time(NULL));

  for (i = 0; i < PASSWORD_LENGTH; i++) {
    password[i] = characters[rand() % (sizeof(characters) - 1)];
  }
}

bool check_password(char *password) {
  return strcmp(password, CORRECT_PASSWORD) == 0;
}

int main() {
  char password[PASSWORD_LENGTH];

  generate_password(password);

  if (check_password(password)) {
    printf("Tada! Congrats\n");
  } else {
    printf("Wrong password\n");
  }

  return 0;
}
