#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a[8] = {2,4,1,7,5,9,0,-3};
	
	for(int i = 0; i < 8-1; i++)
	{
		for(int j = 0;j < 8-1-i; j++)
		{
			if(a[j] > a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	
	for(int i = 0; i < 8;i++)
	{
		printf("%d\n", a[i]);
	}
	
	return 0;
}
