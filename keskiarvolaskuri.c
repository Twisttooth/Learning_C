#include <stdio.h>
    main()
{
    int i=0, summa = 0, lukumaara = 0;
    float keskiarvo;
    
	printf("Ohjelma laskee syötettyjen arvosanojen keskiarvon.\n");
	printf("Lopetus negatiivisella kokonaisluvulla.\n");
		
    do
    {
		printf("Anna arvosana (4-10):");
        scanf("%d", &i);

        if (i>3 && i<11)
        {
            lukumaara++;
            summa += i;
        }

        
    } while (i>=0);

    keskiarvo = (float) summa / lukumaara;
    printf("Ohjelmaan syötetty %d arvosanaa.\n", lukumaara);
    printf("Arvosanojen keskiarvo: %.2f \n", keskiarvo);


return 0;
}