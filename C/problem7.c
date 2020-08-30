#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long double ecd(long a , long b)
/* My implementation of Euclid algrothim */
/* Note a must be greater than b*/
{
    long double c=fmod(a,b);
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
long double findp(long double limit)
{
	long double product=1;
	long double counter=0;
	long double i=1;
	while(counter != limit)
	{
		long double y=ecd(product,i);
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
	printf("%f\n",findp(10001));
}
