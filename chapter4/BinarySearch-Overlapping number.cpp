#include <stdio.h>

int lower_bound(int A[], int left, int right, int x);
int upper_bound(int A[], int left, int right, int x);

int main()
{
	const int n = 8;
	int A[n] = {2, 4, 7, 7, 8, 21, 33, 45};
	printf("The n is located in [%d,%d)\n",lower_bound(A,0,n,7)+1, upper_bound(A,0,n,7)+1 );//note:the right is now n because x might be larger than any number in an Array
		
	return 0;
}

int lower_bound(int A[], int left, int right, int x){
	int mid;//the middle between left and right
	
	while(left < right){//for the [left,right],the "left == right" is the location we need
		mid = (left + right) / 2;
		if(A[mid] >= x){
			right = mid;//search in [left,mid]
		}else {
			left = mid + 1;//search in [mid+1,right]
		}
	}
	return left;//return the location(right equals left in this case)
}

int upper_bound(int A[], int left, int right, int x){
	int mid;//the middle between left and right
	
	while(left < right){//for the [left,right],the "left == right" is the location we need
		mid = (left + right) / 2;
		if(A[mid] > x){
			right = mid;//search in [left,mid]
		}else {
			left = mid + 1;//search in [mid+1,right]
		}		
	}
	return left;//return the location(right equals left in this case)
}
