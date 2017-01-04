#include <stdio.h>

const int maxn = 210;
int a[maxn];//定义存放数组 
int main()
{
	int n, x;//数组个数，查找数
	//while(scanf("%d", &n) != EOF){
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);//输入n个数 
		} 
	//} //黑盒测试-----代码有问题待解决 
	scanf("%d", &x);//输入要查询的数 
	int j;
	for(j = 0; j < n; j++){
		if(a[j] == x){
			printf("%d\n", j);//输出对应下标
			break;//退出 
		}
	}
	if(j == n)
		printf("-1\n");//没找到输出-1
		 
	return 0;
}
