#include <cstdio>
#include <cstring>

const int maxs = 81;
const int maxt = 15;

int main()
{
	char str[maxs], tstr[maxt] = {' '};
	gets(str);//Input words
	
	int j = 0;//Recording the length of each words needs to output except the last one
	//Reversing loop
	for(int i = strlen(str) - 1; i >=0; i--)
	{
		
		if(str[i] != ' ')
		{
			tstr[j++] = str[i];
		}
		else
		{
			for(; j > 0; j--)
			{
				printf("%c", tstr[j-1]);
			}
			printf(" ");
			j = 0;
		}	
	}
	//Output the last words which are not output in the reverse loop
	for(; j > 0; j--)
	{
		printf("%c", tstr[j-1]);
	}
	
	printf("\n");
	
	return 0;
}
