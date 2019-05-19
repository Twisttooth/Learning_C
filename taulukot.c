#include <stdio.h>
int main()

{
    int numerot[10][10];
    int luku = 1;

    FILE *taulukko = fopen("matb.txt", "w");
    FILE *fileread = fopen("matb.txt", "r");

        for (int y = 0; y < 10; y++)
        { 
           for (int x = 0; x < 10; x++)
           {
               numerot[y][x] = luku;
               luku++;

               if (x == 9)
               {
                   fprintf(taulukko, "%d\n", numerot[y][x]);
               }
               else
               {
                   fprintf(taulukko, "%d ", numerot[y][x]);
               }
               
           }
           
        }
        
    if (fileread = NULL)
        {
            printf("tiedoston lukuvirhe");
        }
    

return 0;
}