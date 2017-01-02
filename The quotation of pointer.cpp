#include <stdio.h>

void swap(int* &a,int* &b)
{
	int *tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 23,b = 7;
	int *p1 = &a,*p2 = &b;
	swap(p1,p2);
	printf("a = %d,b = %d\n", *p1, *p2);
	
	return 0;
}
