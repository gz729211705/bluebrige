#include <stdio.h>

int recursion(int A[], int left, int right, int x);

int main()
{
	const int n = 8;
	int A[n] = {2, 4, 7, 8, 9, 21, 33, 45};
	printf("The n is located in %d\n", recursion(A,0,n,21)+1 );
		
	return 0;
}

int recursion(int A[], int left, int right, int x){
	int mid;//the middle between left and right
	
	if(left > right){
		return 0;
	}else {
		mid = (left+right) / 2;
		if(x == A[mid]){
			return mid;
		}else if(A[mid] > x)
			return recursion(A, left, mid - 1, x);
		else
			return recursion(A, mid + 1, right, x);
	}
	
	
}

