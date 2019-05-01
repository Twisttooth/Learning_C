#include <stdio.h>

void summa(void);
void erotus(void);
void tulo(void);

int main(void)
{
  int valinta;
  do
  {

    printf("1: kahden luvun summa\n2: kahden luvun erotus\n3: kahden luvun tulo\n<0: ohjelman lopetus\n");
    printf("Valitse laskutoimitus:");
    scanf("%d", &valinta);
    if(valinta < 0)
    {
      printf("Ohjelma lopetetaan...");
    }
    else if(valinta == 1) {
      summa();
    }
    else if(valinta == 2) {
      erotus();
    }
    else if(valinta == 3) {
      tulo();
    }
    else {
      printf("Antamasi luku ei kelpaa.\n\n");
    }
  }while(valinta>0);
  return 0;
}

int luku1, luku2, lasku;

void summa(void)
{
  printf("Syötä ensimmäinen luku:\n");
  scanf("%d", &luku1);

  printf("Syötä toinen luku:\n");
  scanf("%d", &luku2);
  
    lasku = luku1 + luku2;
  printf("%d + %d = %d\n", luku1, luku2, lasku);
}

void erotus(void)
{
  printf("Syötä ensimmäinen luku:\n");
  scanf("%d", &luku1);

  printf("Syötä toinen luku:\n");
  scanf("%d", &luku2);

  lasku = luku1 - luku2;
  printf("%d - %d = %d\n", luku1, luku2, lasku);
}

void tulo(void)
{
  printf("Syötä ensimmäinen luku:\n");
  scanf("%d", &luku1);

  printf("Syötä toinen luku:\n");
  scanf("%d", &luku2);

  lasku = luku1 * luku2;
  printf("%d * %d = %d\n", luku1, luku2, lasku);
}