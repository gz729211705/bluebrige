#include <stdio.h>

long long GetPx(long long, int);

int main()
{
	long A, B;//��ĿҪ�� 
	int DA, DB;
	scanf("%ld %1d %ld %1d", &A, &DA, &B, &DB);
	
	long long C;
	C = GetPx(A, DA) + GetPx(B, DB);
	printf("%lld\n", C); 
	
	return 0;
}

long long GetPx(long long X, int Dx)
{
	long long Px = 0, n;//���ؽ�����ж��� 
	
	while( X != 0)
	{
		n = X % 10;
		if(n == Dx)
			Px = 10*Px + Dx;//��Ϊ��ȣ������ 
		X /= 10;//��һλ 
	}
	
	return Px;
}
