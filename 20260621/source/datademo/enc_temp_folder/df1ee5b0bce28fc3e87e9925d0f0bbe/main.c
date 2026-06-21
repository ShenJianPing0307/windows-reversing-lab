#include <stdio.h>
#include <Windows.h>

int main()
{
	// 数据类型 变量名 = 初始值;

	// 定义变量
	BYTE a = 0b00000000;

	//变量赋值
	a = 0b111111110; // 9个Bit位，截断高位 0x1FE  0xFE

	// 定义变量
	WORD b = 0b111111110; //WORD 2个字节，16Bit 可以存下 9个Bit 


	return 0;
}
