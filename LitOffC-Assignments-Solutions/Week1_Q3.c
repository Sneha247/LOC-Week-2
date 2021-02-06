#include<stdio.h>
#include<conio.h>
int main(){
	float pi = 3.14, radius, area, perimeter, circumference;
	printf("Enter the radius :"); 
	scanf("%f, &radius");
	area = pi*radius*radius;
	circumference = 2*pi*radius;
	
	printf("\nArea of circle %f", area);
	printf("\nCircumference of circle %f", circumference);
	return 0;

	
	
}
