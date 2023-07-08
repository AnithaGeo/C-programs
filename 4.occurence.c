#include <stdio.h>    
int main()    
{    
    int a[10],i,n,j,count=0;
	printf("enter the limit\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
	  	scanf("%d",&a[i]);
	}
	
    int fr[n];    
  
        
    for(i = 0; i<n; i++)
	{    
        count = 1;    
        for (j = i+1; j < n; j++)
		{    
            if(a[i] == a[j])
			{    
                count++;   
				
                fr[j] = -1;    
            }    
        }    
        if(fr[i] != -1)    
            fr[i] = count;    
    }    
              
    printf(" Element | Frequency\n");    
   
    for( i = 0; i < n; i++)
	{    
        if(fr[i] != -1)
		{    
            printf("    %d", a[i]);       
            printf("  %d\n", fr[i]);    
        }    
    }    
    return 0;    
    
}    
              
