#include<stdio.h>
int fibevensum(int a, int b,int limit)
/* A function that generates a fibonacci sequences based on the first two terms 
 * and thens finds the sum of the sequence. */
{
	static int sum=0;
	/* A static variable that is constant between function calls*/
	int c= a+b;
	if(c%2==0)
	{
		sum+=c;
	}
	if(c>limit)
	{
		return sum;
	}else{
		return fibevensum(b,c,limit);
	}

}
int main(){
	printf("%d",fibevensum(0,1,4e6));
	return 0;
}
