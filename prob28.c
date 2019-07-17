#include <stdio.h>

unsigned long int total;
unsigned long int step;
unsigned long int value;

int main() {

	
	int i;
	i = 0;
	value = 3;
	step =  1;
	total=  1;

	while(step<1001)
	{
		total += value;
		for(i=0;i<3;i++) {
			value += step+1;
			total += value;
		}
		step += 2;
		value += step+1;
	}


	printf("%ld\n",total);
	return 0;
}
