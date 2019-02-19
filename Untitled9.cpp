#include <stdio.h>
int main()
{
int x,y,z,i;
for(x=1;x<6;x++)
{
for(y=5;y>x;y--)	
	printf(" ");
	
for(z=1;z<=y;z++)	
	printf("*");
		
printf("\n");	
}




	return 0;
}