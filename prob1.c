#include<stdio.h>
int main() {
int i,t=0;
for(i=0;i<1000;i+=3) t+=i;
for(i=0;i<1000;i+=5) if(i%3) t+=i;
printf("%d\n",t);
return 0; }
