#include <stdio.h>
#include "main.h"

int main(void)
{
	int len, len2;

   	len = _printf("Let's try to printf a simple sentence.\n");
   	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
