#include<stdio.h>

int main() {
	unsigned long int i,j=0,k=0;
	for(i=1;i<101;i++) {
		j += i*i;
		k += i;
	}
	k *= k;
	printf("%ld\n", k-j);
	return 0;
}
