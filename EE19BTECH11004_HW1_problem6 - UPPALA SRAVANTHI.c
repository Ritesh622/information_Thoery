#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float mod(float);

int main()
{
	FILE *f;
	char c,filename[20];
	int alphabet[30];
	int i,count=0;
	printf("File name:");
	scanf("%s",filename);
	
	
	f=fopen(filename,"r");

c= getc(f);
	
while(c != EOF)
	{
	
	count += 1;	
    printf("%c ",c);
    
	for(i=97;i<123;i++)
	{
		if (c==i)
		{
			alphabet[i-97] += 1;
		}
	}
		
    }
    printf("\n \n");
    printf("Emperical pmf:\n[ ");

for(i=0;i<26;i++)
    {
		
    printf("%c = %f ",i+97,(float)alphabet[i]/(count-1));
    
if(i==25)
    {
		break;
	}
    printf("\n");
    }
printf("] \n");
printf("count= %d",count-1);

if(filename == NULL)
	{
		printf("No such file exists:");
		exit(0);
	}
	
return 0;
}
