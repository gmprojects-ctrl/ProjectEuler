#include<stdio.h>
void sumofmultiples(int a, int b,int c) 
/* Function to find multiples of a and b upto c  and sum them*/
{
	int counter=0;
	for(int i=1; i<c; i++)
	{
		if(i%a==0 || i%b==0)
		{
			counter+=i;
		}
	}
	printf("The sum of the multiples of %d and %d up to %d is %d\n",a,b,c,counter);
}

int main()
{
	sumofmultiples(5,3,1000);
	return 0

}

