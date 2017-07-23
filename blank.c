#include "stdio.h"

int main()
{
	int character, isspace;
	isspace = 0;
	while ((character = getchar()) != EOF) {
		if (character == " ")
		{
			if (isspace == 0)
			{
				isspace = 1;
				putchar(character);
			} else
			{
				isspace = 0;
			}

		}
	}
}