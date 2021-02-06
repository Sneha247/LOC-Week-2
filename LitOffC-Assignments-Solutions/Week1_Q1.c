#include<stdio.h>
#include<conio.h>
void main(){
	int x, y, sum, sub, mul, div;
	printf("Enter two numbers :");
	scanf("%d", &x, &y);
	sum = x+y;
	sub = x-y;
	mul = x*y;
	div = x/y;
	
	printf("\n sum %d", sum);
	printf("\n sub %d", sub);
	printf("\n mul %d", mul);
	printf("\n div %d", div);
	
	return 0;
	
}
