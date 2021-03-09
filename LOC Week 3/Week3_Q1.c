# include<stdio.h>
# include<conio.h>
float square();
int main()
{
	int num, square;
	printf("Enter a number = ");
	scanf("%d", &num);
	square = num*num;
	printf("square of given number is = %d\n", square, num);
	return 0;
	
}

float square(int num)
{
	return num*num;        //2*2 = 4
	                       // 7*7 = 49
}
	
	
	
	
	
	


