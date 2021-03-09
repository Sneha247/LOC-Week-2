# include<stdio.h>
# include<conio.h>
void factorial(int num);
int main()
{
	int num;
	printf("Enter a positive number to find the factorial = ");
	scanf("%d", &num);
	
	factorial(num);
	
	return 0;
}

void factorial(int num)
{
	int i,     factorial = 1;
	
	if(num == 0)
	{
		printf("The factorial of 0 is 1(0!=1)\n");
	}
	
	else
	{
		for(i = 1 ; i<= num ;i++  )
		{
			factorial = factorial*i;
		}
	
	
	printf("Factorial of %d is %d   ", num, factorial, factorial,  num);
	

}
	
	
}
