#include <stdio.h>
#include <Windows.h>


int main()
{
	/* 
	// unsigned char == byte
	signed char a = 1;

	a = -1;

	a = 9;

	a = -4;
	*/

	signed char a = 0xFF80; // signed 有符号 8位 1111 1111 1000 0000 只取后面 80->1000 0000 ->-128
	printf("%d \r\n", a);                                                       

	return 0;
}