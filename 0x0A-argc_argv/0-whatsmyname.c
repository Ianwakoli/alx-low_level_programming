#include <stdio.h>

/**
 * prints the name of the program - argv[0]
 * argc; no of arguments passed to the function
 * argv; array of arguments
 */

int main(int argc __attribute__ ((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
