#include <stdio.h>

#define MAX_SIZE 1024

/* dp storage array */
unsigned int storage[MAX_SIZE];
unsigned int i,j;
long unsigned int t;

/*prototypes*/
unsigned int fib(unsigned int n);

unsigned int fib(unsigned int n)
{
	if(n==1 || n==0)
	{
		return 1;
	}
	if(!storage[n])
	{	
		storage[n] = fib(n-1) + fib(n-2);	
	}

return storage[n];
}


int main()
{
	i=0;
	t=0;
	j=0;
	while(1)
	{
		j=fib(i);
		if(j>4000000) break;
		if(!(j&1)) t+=j;
		i++;
	}
	printf("%ld\n",t);
	return(0);
}
