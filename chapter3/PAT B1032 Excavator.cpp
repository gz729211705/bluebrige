#include <stdio.h>

const int maxn = 100010;//���μ����� 
int school[maxn] = {0};//��ʼ������ 

int main()
{
	int n, schID, score;//nΪ�μ�������schIDΪѧУ��ţ�scoreΪ��Ӧ�÷� 
	scanf("%d", &n);//����μ����� 
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &schID, &score);//ѧУID������ 
		school[schID] += score;//ѧУID�ķ�������score 
	}
	
	int k = 1, MAX = -1;//������ܷ�ѧУ����߷� 
	
	for(int i = 1; i <= n; i++)
	{
		if(school[i] > MAX)
		{
			MAX = school[i];
			k = i;
		}//��������߷�ѧУ����߷� 
	}
	
	printf("%d %d\n", k, MAX);//��� 
	
	return 0;
}
