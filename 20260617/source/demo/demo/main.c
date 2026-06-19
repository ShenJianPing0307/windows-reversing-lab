#include <stdio.h>


int main()
{
    for (size_t i = 0; i <= 100; i++)
    {
        // 打印二进制：0b 前缀 + 8位二进制数字
        printf("0b");
        for (int b = 7; b >= 0; b--) {
            printf("%d", (int)((i >> b) & 1));
        }
        printf(" ");

        if (i % 10 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}
/*
int main()
{
	for (size_t i = 0; i <=100; i++)
	{	
		// printf("%d ",i); //二进制
		printf("0b%02x ", i); //十六进制
		if (i % 10 == 0)
		{
			printf("\r\n");
		}

	}
	return 0;

}
*/