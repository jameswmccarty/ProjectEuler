#include <stdio.h>
char sb[6]; int largest;
int main() {
	int i,j,k,l;
	for(i=111;i<1000;i++) {
		for(j=i;j<1000;j++) {
			l=i*j;
			k=5; while(k>-1) { sb[k--] = l%10; l /= 10; }
			if(sb[0]==sb[5] && sb[1]==sb[4] &&
			   sb[2]==sb[3] && i*j > largest) largest = i*j;
		}
	}
	printf("%d\n", largest); return 0;
}
