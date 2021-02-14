# include<stdio.h>
# include<conio.h>
int main(){
	
	int a[10], size, i, even_sum, even_position;
	printf("\n Enter the size of an array : ");
	scanf("%d", size);
	printf("Enter %d elements of an array : \n", size);
	for(i=0; i<=size; i++)
	{
		scanf("%d", &a[i]);
	}
	  
	for(i=0; i<size; i++)
	{
		if(a[i]%2 == 0)
		{
		
		 even_sum = even_sum+a[i];
		 even_position = i;
		 
	    }
	}
	
	printf("\n Even elements in an array = %d", even_sum);
	printf("\n Index position of the even elements = %d, even_position");
	return 0;
	
}
