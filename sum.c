#include <stdio.h>
#include <stdarg.h>

int sum(int x, int y, ...);

int main(void)
{	
	int answer;

	answer = sum(4,5,6);
	printf("sum = %d\n", answer);

	return (0);
}

int sum(int x, int y, ...)
{		
	va_list other_numbers;
	va_start(other_numbers, y);

	int result = x + y + va_arg(other_numbers, int);
	return (result);
}
