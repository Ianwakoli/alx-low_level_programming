#include <stdio.h>
#include <stdlib.h>

/**
 * prints the name of the program - argv[0]
 * argc; no of arguments passed to the function
 * argv; argument vector of pointers to strings
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
		return (0);
}
