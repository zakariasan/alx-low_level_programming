#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_PASSWORD_LENGTH 12

// Function to generate a random number between min and max (inclusive)
int random_range(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to generate a random lowercase letter
char random_lowercase_letter() {
    return 'a' + random_range(0, 25);
}

// Function to generate a random uppercase letter
char random_uppercase_letter() {
    return 'A' + random_range(0, 25);
}

// Function to generate a random digit
char random_digit() {
    return '0' + random_range(0, 9);
}

// Function to generate a random password
void generate_password(char* password) {
    int length = random_range(6, MAX_PASSWORD_LENGTH); // Choose a random length between 6 and MAX_PASSWORD_LENGTH
    int i;

    for (i = 0; i < length; i++) {
        int choice = random_range(0, 2);
        if (choice == 0) {
            password[i] = random_lowercase_letter();
        } else if (choice == 1) {
            password[i] = random_uppercase_letter();
        } else {
            password[i] = random_digit();
        }
    }
    password[i] = '\0'; // Null-terminate the password
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    char password[MAX_PASSWORD_LENGTH + 1];
    generate_password(password);

    printf("%s\n", password);

    return 0;
}
