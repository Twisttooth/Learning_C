#include <stdio.h>

int main()
{  
	int luku, kertoma;

	do 
		{
		printf("Anna kokonaisluku:");
		scanf("%d", &luku);
    
		kertoma = "%d!" ,luku;
    
		if(luku > 0) 
			{
			printf("Luvun %d kertoma on %d\n", luku, kertoma);
			}
		} while(luku > 0);
    
	return 0;
}