#include<stdio.h>
int ecd(int a , int b)
/* My implementation of Euclid algrothim */
{

	int c;
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
	else if(c==b)
	{
		return 1;
	}
	else
	{
		return ecd(b,c);
	};

}
int lcm(int a,int b)
{
	int hcd=ecd(a,b);
	return (a/hcd)*hcd*(b/hcd);
}
int finlowmul(int N)
{
	int product=2;
	for(int i=1;i<N;i++)
	{
	product=lcm(product,i+1);	
		
	}
	return product;
}
int main()
{
	printf("%d\n",finlowmul(20));
	return 0;
}
