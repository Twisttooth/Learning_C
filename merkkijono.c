#include <stdio.h>
int main()
{
    char etunimi[10], sukunimi[20], tiedosto[10];

    printf("Ohjelma tallentaa etunimesi ja sukunimesi tiedostoon.\n");
    
    printf("Syötä etunimesi:");
    scanf("%s", etunimi);

    printf("Syötä sukunimesi:");
    scanf("%s", sukunimi);

    printf("Tiedosto johon haluat tallentaa nimesi:");
    scanf("%s", tiedosto);

    FILE *nimi;
    FILE *tarkistus;

    nimi = fopen(tiedosto, "w");
    tarkistus = fopen(tiedosto, "r");

    fprintf(nimi, "%s %s", etunimi, sukunimi);
    
    if (tarkistus == NULL)
    {
        printf("tiedosto virhe");
        return 0;
    }
    else
    {
        printf("Tallennus onnistui!");
    }
    

    return 0;
}