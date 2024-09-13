/* The statement
samp = (short) fracsamp * 32767;
is intended to convert a floating-point sample (e1.0) to the 16-bit integer range:
samp = (short) fracsamp * 32767;
However the output is not as expected. Why?

Ans: undeclared variables
*/
#include <stdio.h>

int main()
{
	short fracsamp;
	int samp = fracsamp * 32767;

	printf("%d\n", samp);
	return 0;
}