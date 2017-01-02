#include <stdio.h>

int main()
{
	int n,sum = 0;
	
	for(int i = 1; i<=1000;i++)
	{
		sum += i;
		if(sum >= 2000)
			break;
	}
	
	printf("sum = %d\n", sum);
	return 0;
	
}
