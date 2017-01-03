#include <stdio.h>

typedef long long ll;

 int main()
 {
 	int T;
 	scanf("%d", &T);
 	
	ll a[10] = {0},b[10] = {0},c[10] = {0};
 	for(int i = 0; i < T; i++)
 	{
 		scanf("%lld %lld %lld", &a[i], &b[i], &c[i]);
	 }
 	
 	for(int j = 0; j < T; j++)
 	{
 		if( ( *(a+j)+*(b+j) ) > *(c+j) )
 			printf("Case #%d:true\n", j+1);
 		else
 			printf("Case #%d:false\n", j+1);
	 }
 	
 	return 0;
 }
