/* Using the sizeof() operator and printf statements, 
write a small program to report the size in bytes of each of the following:
int char short long float double
This will be of particular interest and importance if you happen to be using a 64-bit machine.
*/

#include <stdio.h>

int main()
{
	int intsize = sizeof(int);
	int charsize = sizeof(char);
	int shortsize = sizeof(short);
	int longsize = sizeof(long); 
	int floatsize = sizeof(float);
	int doublesize = sizeof(double);

	printf("int size is %d byte(s)\n", intsize);
	printf("char size is %d byte(s)\n", charsize);
	printf("short size is %d byte(s)\n", shortsize);
	printf("long size is %d byte(s)\n", longsize);
	printf("float size is %d byte(s)\n", floatsize);
	printf("double size is %d byte(s)\n", doublesize);
	return 0;
}
