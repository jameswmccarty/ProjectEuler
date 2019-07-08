#include<stdio.h>
#include<math.h>

/* (log(x)/log(10))*59049 == x */
#define LIMIT 325513

int vect[6];

long int test(int i) {
	int acc=0;
	int j,k,s;
	for(j=0;j<6;j++) {
		if(vect[j]) {
			k=5;s=1;
			while(k) {s*=vect[j]; k--;}
			acc+=s;
		}
	}
	if(i==acc)
		return i;
	return 0;
}	

int main() {
	int i,j,k;
	long int sum=0;
	for(i=2;i<LIMIT;i++) {
		j=5; k=i; while(j>-1) {vect[j--] = k%10; k/= 10;}
		sum += test(i);
	}
	printf("%ld\n",sum);
	return 0;
}	
		
