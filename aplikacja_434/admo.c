#include "libapds.h"
#include <stdio.h>

void admo()
{
	void InfoMenuAdmoGalep()
{
	printf("\n________________________________________________________________________________________________\n");
	printf(" Wybierz tryb tworzenia kodu ADMO:\n");
	printf(" (Wprowadz jedna z cyfr odpowadajacych podanym tryba tworzenia, a nastepnie nacisnij ENTER)\n\n");
	
	printf(" 1  --> ADMO na galepie\n");
	printf(" 2  --> Numer ADMO na ustawienie zworek (stary typ) (W ROZWOJU)\n");
	printf(" 3  --> Ustawienie zworek na numer ADMO (stary typ) (W ROZWOJU)\n");

	printf(" \n(Aby wrocic do menu glownego nacisni:  CTRL + Z , a nastepnie nacisnij ENTER)\n");
	printf("________________________________________________________________________________________________\n");
}
	
	void AdmoGalep()
{}
	void OldAdmoNumer()
{}
	void OldAdmoZworki()
{}

	void InfoAdmoGalep()
{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
}
	void InfoOldAdmoNumer()
{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
}
	void InfoOldAdmoZworki()
{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
}

	int option3;

	InfoMenuAdmoGalep();

	while ((scanf("%d",&option3)) != EOF)
	{
		switch(option3)
		{
			case 1:
				AdmoGalep();
				InfoAdmoGalep();
				break;
			case 2:
				OldAdmoNumer();
				InfoOldAdmoNumer();
				break;	
			case 3:
				OldAdmoZworki();
				InfoOldAdmoZworki();
				break;			
			default:
				printf("\nPodaj prawidlowa wartosc!\n");
		}
	InfoMenuAdmoGalep();
	}
}

