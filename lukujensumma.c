#include <stdio.h>
int main(void)
{

FILE *luvut = fopen("lukuja.txt", "r"); 
      int luku1, luku2, luku3, luku4, summa;
     
      if((luvut) == NULL)
        { 
        printf("virhe!"); return 0; 
        } 
        else 
        { 
          fscanf(luvut, "%d %d %d %d ", &luku1, &luku2, &luku3, &luku4);
          fclose(luvut);

        summa = luku1 + luku2 + luku3 + luku4;

        printf("Tiedostosta luvut.s löytyneet luvut:\n%d, %d, %d ja %d\n", luku1, luku2, luku3, luku4);
        printf("Lukujen summa: %d", summa);
        } 

    return 0;
}