#include <stdio.h>
#include <stdint.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
 
	char  a; 
	int   b;
	float c;

	printf(ANSI_COLOR_RED  "char  is [%lu]\n", sizeof(a));
	printf(ANSI_COLOR_BLUE "int   is [%lu]\n", sizeof(b));
	printf(ANSI_COLOR_CYAN "float is [%lu]\n", sizeof(c));
	printf(ANSI_COLOR_RESET "\n"); 

	return 0;
}
