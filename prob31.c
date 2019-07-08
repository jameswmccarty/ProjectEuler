#include<stdio.h>

int coins[8] = {1,2,5,10,20,50,100,200};

int possibilites(int value,int idx) {
	int sum = 0;
	int i;
	if(value==0)
		return 0;
	for(i=idx;i<8;i++) {
		if(value-coins[i]==0) sum+= 1;
		if(value-coins[i]>0) 
			sum += possibilites(value-coins[i],i);
	}
	return sum;
}

int main() {
	printf("%d\n",possibilites(200,0));
	return 0;
}
