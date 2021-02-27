#include <stdio.h>

int main(void)
{
	int n,i,tInterarrival[20],tArrival[20];
	tInterarrival[0] = 0;
	tArrival[0] = 0;
	
	for( i = 0 ; i < 19 ; i++ ) 
	{
		n = rand()%50;
		tInterarrival[i+1] = n;
	}
	
	for(i = 0; i < 19; i++)
	{
		tArrival[i+1] = tArrival[i] + tInterarrival[i+1];
	}
	
	printf("Customer No\t\tInterarrival Time\t\tArrival Time\n");
	for(i = 0; i < 20; i++)
	{
		printf("%d\t\t\t\t %d\t\t\t\t\t\t %d\n",i+1,tInterarrival[i],tArrival[i]);
	}

}
