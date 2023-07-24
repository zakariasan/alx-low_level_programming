#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));

	char password[10];
	for (int i = 0; i < 10; i++)
	{
		password[i] = rand() % 95 + 32;
	}

	printf("%s\n", password);

	return 0;
}
