#include <stdio.h>

const int maxn = 100010;//最大参加人数 
int school[maxn] = {0};//初始化分数 

int main()
{
	int n, schID, score;//n为参加人数，schID为学校编号，score为相应得分 
	scanf("%d", &n);//输入参加人数 
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &schID, &score);//学校ID，分数 
		school[schID] += score;//学校ID的分数增加score 
	}
	
	int k = 1, MAX = -1;//设最高总分学校和最高分 
	
	for(int i = 1; i <= n; i++)
	{
		if(school[i] > MAX)
		{
			MAX = school[i];
			k = i;
		}//遍历求最高分学校和最高分 
	}
	
	printf("%d %d\n", k, MAX);//输出 
	
	return 0;
}
