#include<stdio.h>
long euclid_algo(long a , long b)
/* My implementation of Euclid algrothim */
{

	long c;
	if(a>b)
	{
		c= a%b;
	}
	else
	{
		c=b%a;
	}
	if(c==0)
	{
		return b; 
	}
	else
	{
		return euclid_algo(b,c);
	};

}
long findpfactor(long N)
{
	long product=1;
	long biggest_factor=0;
	long i=3;
	while(N !=1 && i<=N)
	{
		if(N%i==0)
		{
			if(i>biggest_factor && euclid_algo(product,i)==1 )
			/* Checks that the largest factor is both the largest and if it is prime */
			{
				biggest_factor=i;
				
			}
			N=N/i;
			i+=2;
			product*=i;

		}
		else
		{
			i+=2;
		}

	}
	return biggest_factor;
}
int main()
{
	printf("%ld\n",findpfactor(600851475143));
	return 0;
}
