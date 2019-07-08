#include<stdio.h>

int main() {
	int m,n;
	for(m=1;m<300;m++) {
		for(n=1;n<300;n++) {
			if(((m*m-n*n)+(2*m*n)+(m*m+n*n))==1000)
				printf("%d %d %d : %d\n", (m*m-n*n), (2*m*n), (m*m+n*n), (m*m-n*n)*(2*m*n)*(m*m+n*n));
		}
	}
	return 0;
}		
