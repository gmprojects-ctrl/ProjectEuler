#include<stdio.h>
int ecd(int a , int b)
/* My implementation of Euclid algrothim */
/* Note a must be greater than b*/
{
    int c=a%b;
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
    }
}
int findp(int limit)
{
	int product=1;
	int counter=0;
	int i=1;
	while(counter != limit)
	{
		int y=ecd(product,i);
		if(y==1)
		{
			counter+=1;
			product*=i;
		}
		i+=1;

	}
	return i-1;

}
int main()
{
	printf("%d\n",findp(10001));
}
