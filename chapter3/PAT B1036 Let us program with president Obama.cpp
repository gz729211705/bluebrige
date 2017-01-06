#include <stdio.h>

int main()
{
	char a[10][20], C;//define array and varibles
	int N;
	
	scanf("%d %c", &N, &C);
	
	int N0;//the number of row
	if(N%2 == 1){
		N0 = (N / 2) + 1;//.5 to 1
	}else{
		N0 = N / 2;
	}
	
	for(int i = 0; i < N0; i++){
		for(int j = 0; j < N; j++)
		{
			if(i == 0 || i == (N0-1)){
				a[i][j] = C;//output all char in one row when i is the first or last
				printf("%c", a[i][j]);
			}else if(j == 0 || j == (N-1)){
				a[i][j] = C;//judge whether output space or char
				printf("%c", a[i][j]);
			}else{
				a[i][j] = ' ';
				printf("%c", a[i][j]);
			}
				
        }
        
        printf("\n");
	}
		
		
	return 0;
}
