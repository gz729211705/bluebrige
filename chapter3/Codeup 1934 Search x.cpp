#include <stdio.h>

const int maxn = 210;
int a[maxn];//���������� 
int main()
{
	int n, x;//���������������
	//while(scanf("%d", &n) != EOF){
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);//����n���� 
		} 
	//} //�ںв���-----�������������� 
	scanf("%d", &x);//����Ҫ��ѯ���� 
	int j;
	for(j = 0; j < n; j++){
		if(a[j] == x){
			printf("%d\n", j);//�����Ӧ�±�
			break;//�˳� 
		}
	}
	if(j == n)
		printf("-1\n");//û�ҵ����-1
		 
	return 0;
}
