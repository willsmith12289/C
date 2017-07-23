#include "stdio.h"

int main(void)
{
	int character, newlinecount, blankcount, tabcount, newchar;
	character = getchar();
	while (character != EOF ) {

		if (character == '\n' )
			++newlinecount;
		else if (character == '\t' )
			++tabcount;
		else if (character == ' ')
			++blankcount;
		else
		printf("%d %d %d\n", newlinecount, tabcount, blankcount);
	}
}