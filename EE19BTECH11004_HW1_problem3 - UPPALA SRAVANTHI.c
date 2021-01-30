#include <time.h>
#include <stdio.h>
#include <stdlib.h>

float mod(float);

int main()
{
	
	int i,num_trails;
	// probability of getiing a
	double p_Xa=0.1503273508;
	// probability of getiing b
	double p_Xb=0.01705166895;
	// probability of getiing c
	double p_Xc=0.6737895768;
	// probability of getiing d
	double p_Xd=0.1588314035;
	printf("%f \n",p_Xa+p_Xb+p_Xc+p_Xd);
    printf("Total number of trails:");
    scanf("%d",&num_trails);
    // Mapping random decimals to given alphabets
    srand((unsigned)time(NULL));
    float r;
    for(i=0;i<num_trails;i++)
    {
        r = ((float)rand())/RAND_MAX;
        
        if(r>=0 && r<p_Xa)
        {
        	printf("p_Xa \t");
		}
		 else if(r>=p_Xa && r<p_Xb+p_Xa)
		{
			printf("p_Xb \t");
		}
		 else if(r>=p_Xa+p_Xb && r<p_Xa+p_Xb+p_Xc)
		{
			printf("p_Xc \t");
		}
		 else if(r>=p_Xa+p_Xb+p_Xc && r<=1)
		{
        	printf("p_Xd \t");
		}
		 }
    return 0;
}
    
