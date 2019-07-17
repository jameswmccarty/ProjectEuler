#include<stdio.h>

unsigned int hits[1000000];

long unsigned int next(long unsigned int n) {
	if(!(n%2))
		return n/2;
	return 3*n+1;
}

unsigned int path(long unsigned int n) {
	if(n==1) {
		hits[n-1] = 1;
		return 1;
	}
	if(n<1000000) {
		if(hits[n] != 0) 
			return hits[n];
		else {
			hits[n] = 1 + path(next(n));
			return hits[n];
		}
	}
	return 1 + path(next(n));
}

int main() {
	
	int i;
	int max = 0;
	int maxi = 0;
	for(i=1;i<1000000;i++) {
		if(hits[i] == 0) {
			hits[i] = path(i);
		}
	}
	for(i=1;i<1000000;i++) {
		if(hits[i] > max) {
			max = hits[i];
			maxi = i;
		}
	}
	printf("%d %d\n",maxi,max);

	return 0;
}
