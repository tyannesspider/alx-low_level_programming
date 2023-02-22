#include <unistd.h>

/**
 *_putchar -wriets the character c to stdout
 *@c: The character to print
 *Return : On sucess 1.
 *On error, -1 is returned and errno is set 
 */

int _putchar(char c)

{
	return (write(1, &c, 1));

}
