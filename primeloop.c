#include <stdio.h>
int main()
{
	int i; 
	int n=45; 
	int prime=0;
	for(i=2; i<45; i++)
	{
	    if(n%1==0 && i!=2)
	    {
	        prime=1;
	        break;
	    }
	    
	}
	if(prime==1)
	{
	    printf("Not Prime");
	}
	else
	{
	    printf("Prime");
	    
	}
	
	return 0;
}