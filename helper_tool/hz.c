#include "libapds.h"
#include <stdio.h>

void hz()
{
	void MHz434()
	{

	}
	void MHz869()
	{

	}
	void GHz24()
	{

	}
	
	void InfoMenuMHz434()
	{
		printf("(W ROZWOJU)\n");
		printf("Future:\n-kanal na zworki\n-zworki na kanal\n-czestotliwosc na kanal\n");
		printf("Wybierz cos innego\n");
	}
	void InfoMenuMHz869()
	{
		printf("(W ROZWOJU)\n");
		printf("Future:\n-kanal na zworki\n-zworki na kanal\n-czestotliwosc na kanal\n");
		printf("Wybierz cos innego\n");
	}
	void InfoMenuGHz24()
	{
		printf("(W ROZWOJU)\n");
		printf("Future:\n-kanal na zworki\n-zworki na kanal\n-czestotliwosc na kanal\n");
		printf("Wybierz cos innego\n");
	}

	void InfoMenuHz()
	{
	printf("\n________________________________________________________________________________________________\n");
	printf(" Wybierz czestotliwosc:\n");
	printf(" (Wprowadz jedna z cyfr odpowadajacych podanym programom, a nastepnie nacisnij ENTER)\n\n");
	
	printf(" 1  --> 434 MHz (W ROZWOJU)\n");
	printf(" 2  --> 869 MHz (W ROZWOJU)\n");
	printf(" 3  --> 2,4 GHz  (W ROZWOJU)\n");

	printf(" \n(Aby wrocic do glownego menu nacisni:  CTRL + Z , a nastepnie nacisnij ENTER)\n");
	printf("________________________________________________________________________________________________\n");	
	}

	int option5;

	InfoMenuHz();

	while ((scanf("%d",&option5)) != EOF)
	{
		switch(option5)
		{
			case 1:
			 	InfoMenuMHz434();
				MHz434();
				break;
			case 2:
				MHz869();
				InfoMenuMHz869();
				break;
			case 3:
				GHz24();
				InfoMenuGHz24();
				break;
			default:
				printf("\nPodaj prawidlowa wartosc!\n");
		}

		InfoMenuHz();
	}
}
