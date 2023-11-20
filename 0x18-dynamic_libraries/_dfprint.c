#include <unistd.h>

int puts(const char *s)
{
	(void) s;
	
	int result = write(1, "--> Please make me win!\n", 24);
	
	return result;
}

int printf(const char *format, ...)
{
	(void) format;

	return 0;
}
