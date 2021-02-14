# include<stdio.h>
# include<conio.h>
int main(){
	
	int a[10], size, i, minimum, maximum, minimum_position, maximum_position;
	printf("\n Enter the size of an array : ");
	scanf("%d", &size);
	printf("\n Enter %d elements of an array : \n", size);
	for(i=0;i<size; i++)
	{
		
		scanf("%d", &a[i]);
		
	}
	
	minimum = a[0];
	maximum = a[0];
	
	for(i=1; i<size; i++)
	{
		if(minimum > a[i])
		{
			minimum = a[i];
			minimum_position = i;
			
		}
		
		if(maximum < a[i])
		{
			maximum = a[i];
			maximum_position = i;
		}
	}
	
	printf("\n Smallest elements in an array = %d", minimum);
	printf("\n Index position of the smallest element = %d \n", minimum_position);
	printf("\n Largest elements in an array = %d", maximum);
	printf("\n Index position of the largest element = %d \n", maximum_position);
	return 0;
}
