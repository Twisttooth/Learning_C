#include <stdio.h>
int main()

{
    int summataulukko[10][10], mata[10][10], matb[10][10];

    FILE *taulukkoA = fopen("mata.txt", "r");
    FILE *taulukkoB = fopen("matb.txt", "r");
    FILE *summa = fopen("summa.usr", "w+");

    if (taulukkoA == NULL)
    { 
          printf("Tiedoston mata.txt avaus epäonnistui."); 
          return 0;
    }
    
    else
    {
        for (int y = 0; y < 10; y++)
        { 
           for (int x = 0; x < 10; x++)
           {
               if (x == 9)
               {
                   fscanf(taulukkoA, "%d", &mata[y][x]);
               }
               else
               {
                   fscanf(taulukkoA, "%d ", &mata[y][x]);
               }
               
           }
           
        }
    }
    fclose(taulukkoA);

    if (taulukkoB == NULL)
    { 
          printf("Tiedoston matb.txt avaus epäonnistui."); 
          return 0;
    }
    
    else
    {
        for (int y = 0; y < 10; y++)
        { 
           for (int x = 0; x < 10; x++)
           {
               if (x == 9)
               {
                   fscanf(taulukkoB, "%d", &matb[y][x]);
               }
               else
               {
                   fscanf(taulukkoB, "%d ", &matb[y][x]);
               }
               
           }
           
        }
    }
    fclose(taulukkoB);

    for (int y = 0; y < 10; y++)
        { 
           for (int x = 0; x < 10; x++)
           {
               summataulukko[y][x] = mata[y][x] + matb[y][x];
               if (x == 9)
               {
                   fprintf(summa, "%d\n", summataulukko[y][x]);
               }
               else
               {
                   fprintf(summa, "%d ", summataulukko[y][x]);
               }
               
           }
           
        }
    
    printf("Matriisien summa on laskettu tiedostoon summa.usr.\n");

return 0;
}