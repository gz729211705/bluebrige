#include <stdio.h>

//Each days of every month in normal year and leap year
int month[13][2] = {{0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31} };

bool isLeap(int);

int main()
{
	int time1, y1, m1, d1;
	int time2, y2, m2, d2;//Two defination of time and years, month as well as days
	
	scanf("%d%d", &time1, &time2);//Input two years wanna know the D-value
	
	//When the first year is larger than the second one they should be exchanged
	if(time1 > time2)
	{
		int tmp = time1;
		time1 = time2;
		time2 = tmp;
	}
	
	//Separate corresponding y-m-d from time using a little bit math
	y1  = time1 / 10000, m1 = time1 % 10000 / 100, d1 = time1 % 100; 
	y2  = time2 / 10000, m2 = time2 % 10000 / 100, d2 = time2 % 100;
	
	int ans = 1;//it records the final result
	
	//We run the circulation when the first time is not same as the second.
	//That means code condition should not be "(y1==y2)&&(m1==m2)&&(d1==d2)"
	
	while(y1 < y2 || m1 < m2|| d1 < d2)
	{
		d1++;//day1 increase one
		
		//Judge whether d1 is corresponded to the days of current month
		if(d1 == month[m1][isLeap(y1)] + 1)
		{
			m1++;
			d1 = 1;//d1 turns to the first day of next month
		}
		
		//Judge whether m1 is correponded to 12
		if(m1 == 13)
		{
			y1++;
			m1 = 1;
		}
		
		ans++;//Record the D-value of time
	}
	
	printf("%d\n", ans);//input the D-value
	
	return 0;
} 

//Method to judge whether one year is leap or not
bool isLeap(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


