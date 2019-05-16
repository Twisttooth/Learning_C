#include <stdio.h>
int main()

{
    int WORKDAYS;
    float sumhour = 0;

    printf("Ohjelma laskee yhteen haluamasi ajanjakson aikana\ntehdyt työtunnit sekä keskimääräisen työpäivän pituuden.\n\n");
    printf("Kuinka monta päivää:");
    scanf("%d", &WORKDAYS);

    float Workhours[WORKDAYS];

    for (int index = 0; index < WORKDAYS; index++)
    {
        printf("Anna %d päivän työtunnit:", index+1);
        scanf("%f", &Workhours[index]);

        sumhour += Workhours[index];
    }

    float workday = sumhour/WORKDAYS;

    printf("Tehdyt työtunnit yhteensä: %.1f\n", sumhour);
    printf("Keskimääräinen työpäivän pituus: %.1f\n", workday);
    printf("Syötetyt tunnit: ");

    for (int i = 0; i < WORKDAYS; i++)
    {
        if (i < WORKDAYS-1)
        {
            printf("%.1f, ", Workhours[i]);
        }
        else
        {
            printf("%.1f\n", Workhours[i]);
        }
        
        
    }
    
return 0;
}