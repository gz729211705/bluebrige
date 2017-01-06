#include <stdio.h>

double f(double);
double csqrt();

const double eps = 1e-5;//precision

int main()
{
	double rel = csqrt();
	
	printf("%lf\n", rel);
	
	return 0;
}

double f(double x)
{
	return x * x;
}

//count the sqrt2
double csqrt()
{
	double left = 1, right = 2, mid;//Assume that sqrt is located on the section between 1 and 2,which is obviously observed by brain
	
	while((right - left) > eps)
	{
		mid = (left + right) / 2;//Binary to the middle
		if(f(mid) > 2){
			right = mid;//Search into the left side
		}else{
			left = mid;//Search into the right side
		}
	}
	
	return mid;//return the final result
}
