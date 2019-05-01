#include <stdio.h>

int suurin();
int pienin();
int luku1, luku2, luku3;

int main()
{
    printf("Anna 1. luku:\n");
    scanf("%d", &luku1);

    printf("Anna 2. luku:\n");
    scanf("%d", &luku2);

    printf("Anna 3. luku:\n");
    scanf("%d", &luku3);

    printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d.\n", suurin(), pienin());

  return 0;

}

int suurin()
{
    if (luku1 > luku2 && luku1 > luku3)
    {
        return luku1;
    }
    else if (luku2 > luku1 && luku2 > luku3)
    {
        return luku2;
    }
    else if (luku3 > luku1 && luku3 > luku2)
    {
        return luku3;
    }
}

int pienin()
{
    if (luku1 < luku2 && luku1 < luku3)
    {
        return luku1;
    }
    else if (luku2 < luku1 && luku2 < luku3)
    {
        return luku2;
    }
    else if (luku3 < luku1 && luku3 < luku2)
    {
        return luku3;
    } 
}