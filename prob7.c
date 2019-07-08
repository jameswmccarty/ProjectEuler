#include<stdio.h>

#define UPPERLIMIT 1000000

int i,j,count;
unsigned char bitarray[(UPPERLIMIT/8)+1];

int main() {
	 count=0;
	 for(i=0;i<(UPPERLIMIT/8)+1;i++)
	 	bitarray[i] = (char) 0xFF;	 
	 bitarray[0] &= (char) ~128;
	 for(i=2;i<UPPERLIMIT;i++) {
	 	if(bitarray[(i/8)]&(1<<(7-(i%8)))) {
			j=i;
			count++;
			if(count==10001) 
				printf("%d\n",j);
			while(j<UPPERLIMIT) { 
				bitarray[(j/8)] &= (char) ~(1<<(7-(j%8)));
				j+=i;
			}
		} 
	}
return 0; 
}
