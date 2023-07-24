#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	char password[10];
	int i;

	srand(time(0));

	for (i = 0; i < 10; i++)
	{
		password[i] = rand() % 95 + 32;
	}

	printf("%s\n", password);

	return 0;
}
