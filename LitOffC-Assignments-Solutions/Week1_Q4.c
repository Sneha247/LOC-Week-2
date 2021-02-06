#include<stdio.h>
#include<conio.h>
int main(){
	float chemistry, physics, biology, computer, mathematics, Total;
	printf("Enter the marks of chemistry = \n");
	scanf("%f", &chemistry);
	printf("Enter the marks of physics = \n");
	scanf("%f" , &physics);
	printf("Enter the marks of biology = \n");
	scanf("%f" , &biology);
	printf("Enter the marks of computer = \n");
	scanf("%f" , &computer);
	printf("Eneter the marks of mathematics = \n");
	scanf("%f" , &mathematics);
	Total =(chemistry+physics+biology+computer+mathematics)/500*100;
	printf(" Percentage = %f\n", Total);
	if(Total>=90)
	
	printf("Grade = A");
	else if(Total>=80)
	printf("Grade = B");
	else if(Total>=70)
	printf("Grade = C");
	else if(Total>=60)
	printf("Grade = D");
	else if(Total>=40)
	printf("Grade = E");
	else 
	printf("Grade = F");
	return 0;
	
	
	

     
	
	 
		
	 
	
	
}
