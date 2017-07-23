#include "stdio.h"

int main()
{
	int character, nlc, bc, tc;
	while ((character = getchar()) != EOF )
		if (character == '\n' )
		{
			++nlc;
		}
		if (character == '\t' )
		{
			++tc;
		}
		if (character == ' ')
		{
			++bc;
		}
		printf("%d %d %d\n", nlc, tc, bc);
}