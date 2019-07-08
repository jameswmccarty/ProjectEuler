#include <stdio.h>

int test(int i) {
	int j;
	for(j=2;j<21;j++)
		if(i%j)
			return 0;
	return 1;
}

int main() {
	int i;
	i=1;
	while(1) {
		if(test(i)) {
			printf("%d\n",i);
			break;
		}
		i++;
	}
	return 0;
}
