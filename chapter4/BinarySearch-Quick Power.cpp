#include <stdio.h>

typedef long long ll;

ll binaryPow(ll, ll, ll);

int main()
{
	ll a, m;
	ll b;
	printf("Please input three unsigned int a(10^9),b(10^18),m(10^9):");
	scanf("%ld %ld %ld", &a, &b, &m);
	if(m == 1){
		printf("The result is 0");
	}else{
		ll rel = binaryPow(a, b, m);//a^b mod m to rel
		printf("%ld\n", rel); //output
	}
	
	return 0;
}

ll binaryPow(ll a, ll b,ll m){
	if(b == 0)
		return 1;//b=0,a^0=1
	//b is odd number
	if(b & 1)//b%2 == 1 equals to it
		return a * binaryPow(a, b-1, m) % m;
	else{
		ll mul = binaryPow(a, b/2, m);
		return mul * mul % m;
	}
}
