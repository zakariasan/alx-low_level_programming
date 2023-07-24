#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_PASSWORD_LENGTH 12

int random_range(int min, int max) {
    return rand() % (max - min + 1) + min;
}

char random_lowercase_letter() {
    return 'a' + random_range(0, 25);
}

char random_uppercase_letter() {
    return 'A' + random_range(0, 25);
}

char random_digit() {
    return '0' + random_range(0, 9);
}

void generate_password(char* password) {
    int length = random_range(6, MAX_PASSWORD_LENGTH);
    int i;
    int choice;

    for (i = 0; i < length; i++) {
	    choice = random_range(0, 2);
        if (choice == 0) {
            password[i] = random_lowercase_letter();
        } else if (choice == 1) {
            password[i] = random_uppercase_letter();
        } else {
            password[i] = random_digit();
        }
    }
    password[i] = '\0'; 
}

int main() {

    char password[MAX_PASSWORD_LENGTH + 1];
    srand(time(NULL)); 
    generate_password(password);

    printf("%s\n", password);

    return 0;
}
