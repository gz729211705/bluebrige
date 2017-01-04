#include <stdio.h>

int binarySearch(int A[], int left, int right, int x);//declaration

int main()
{
	const int n = 10;
	int x;//the number to search
	scanf("%d", &x);//input it
	int A[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("%d\n", binarySearch(A, 0, n-1, x)+1);//output consequence
	
	return 0;
}

int binarySearch(int A[], int left, int right, int x){
	
	int mid;//mid is the middle between left and right
	while(left <= right){//the condition to exit--left is larger than right no way construct interval
		mid = (left + right) / 2;//acquire the middle
		if(A[mid] == x)
			return mid;//found x to return mid
		else if(A[mid] > x){//the middle is larger than x
			right = mid - 1;//search into the left interval
		}else {//the middle is smaller than x
			left = mid + 1;//search into the right interval
		}
	}
	
	return -1;//failure
}
