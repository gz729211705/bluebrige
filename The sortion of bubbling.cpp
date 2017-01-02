#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Intlen(int *);

int main()
{
	int a[8] = {2,4,1,7,5,9,-6,-3};
	int len = Intlen(a);
	
	for(int i = 0; i < len-1; i++)
	{
		for(int j = 0;j < len-1-i; j++)
		{
			if(a[j] > a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	
	for(int i = 0; i < len;i++)
	{
		printf("%d\n", a[i]);
	}
	
	return 0;
}

int Intlen(int a[])
{
	int i = 0;
	
	while(*a != '\0')
	{
		a++;
		i++;
	}
	
	return i;
}
