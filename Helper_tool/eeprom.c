#include "libapds.h"
#include <stdio.h>

void eeprom()
{
	void InfoMenueepromGalep()
{
	printf("\n________________________________________________________________________________________________\n");
	printf(" Wybierz tryb tworzenia kodu eeprom:\n");
	printf(" (Wprowadz jedna z cyfr odpowadajacych podanym tryba tworzenia, a nastepnie nacisnij ENTER)\n\n");
	
	printf(" 1  --> eeprom na galepie\n");
	printf(" 2  --> Numer eeprom na ustawienie zworek (stary typ) (W ROZWOJU)\n");
	printf(" 3  --> Ustawienie zworek na numer eeprom (stary typ) (W ROZWOJU)\n");

	printf(" \n(Aby wrocic do menu glownego nacisni:  CTRL + Z , a nastepnie nacisnij ENTER)\n");
	printf("________________________________________________________________________________________________\n");
}
	
	void eepromGalep()
{}
	void OldeepromNumer()
{}
	void OldeepromZworki()
{}

	void InfoeepromGalep()
{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
}
	void InfoOldeepromNumer()
{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
}
	void InfoOldeepromZworki()
{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
}

	int option3;

	InfoMenueepromGalep();

	while ((scanf("%d",&option3)) != EOF)
	{
		switch(option3)
		{
			case 1:
				eepromGalep();
				InfoeepromGalep();
				break;
			case 2:
				OldeepromNumer();
				InfoOldeepromNumer();
				break;	
			case 3:
				OldeepromZworki();
				InfoOldeepromZworki();
				break;			
			default:
				printf("\nPodaj prawidlowa wartosc!\n");
		}
	InfoMenueepromGalep();
	}
}

