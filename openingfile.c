#include <stdio.h>

int main()
{
	FILE *avaus = fopen("hello.usr", "w");
	char *hello = "hello.usr";
	
    fprintf(avaus, "Moi maailma!");
    fclose(avaus);

    printf("Tiedostoon kirjoittaminen onnistui.\nOhjelma suljetaan.");
	
	return 0;
}