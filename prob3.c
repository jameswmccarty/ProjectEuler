#include<stdio.h>

#define SQTINPUT 775147
unsigned long int input;
unsigned long int i,j;
unsigned char bitarray[(SQTINPUT/8)+1];

int main() {	
	 input = 600851475143;
	 for(i=0;i<(SQTINPUT/8)+1;i++)
	 	bitarray[i] = (char) 0xFF;	 
	 bitarray[0] &= (char) ~128;
	 for(i=2;i<SQTINPUT;i++) {
	 	if(bitarray[(i/8)]&(1<<(7-(i%8)))) {
			j=i;
			if(!(input%j)) 
				printf("%ld\n",j);
			while(j<SQTINPUT) { 
				bitarray[(j/8)] &= (char) ~(1<<(7-(j%8)));
				j+=i; 
			}	
		} 
	}
return 0; 
}
