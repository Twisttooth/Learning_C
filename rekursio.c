#include <stdio.h>
long int kertoma(int n);

int main ()
{
	int n;
	printf("Anna kokonaisluku:");
	scanf("%d", &n);
	printf("Luvun %d kertoma on %ld\n", n, kertoma(n));
	return 0;
}
long int kertoma(int n)
{
	if (n >= 1)
		return n*kertoma(n-1);
	else
		return 1;
}