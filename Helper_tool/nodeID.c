#include "libapds.h"
#include <stdio.h>

void nodeID()
{
	void InfoMenuNodeID()
	{
	printf("\n________________________________________________________________________________________________\n");
	printf(" Wybierz tryb zmiany Node ID:\n");
	printf(" (Wprowadz jedna z cyfr odpowadajacych podanym programom, a nastepnie nacisnij ENTER)\n\n");
	
	printf(" 1  --> ID z liczb decymalnych na hexadecymalne dla Feedback LED (W ROZWOJU)\n");
	printf(" 2  --> ID z liczb decymalnych na hexadecymalne dla Feedback LCD (W ROZWOJU)\n");


	printf(" \n(Aby wrocic do menu glownego:  CTRL + Z , a nastepnie nacisnij ENTER)\n");
	printf("________________________________________________________________________________________________\n");
	}

	void IDhexLED()
	{}
	void IDhexLCD()
	{}

	void InfoMenuIDhexLED()
	{				
		printf("\nID dla Feedback LED (W ROZWOJU)\n");	
		printf("Wybierz inny tryb!\n");	}
	void InfoMenuIDhexLCD()
	{
		printf("\nID dla Feedback LCD (W ROZWOJU)\n");	
		printf("Wybierz inny tryb!\n");	
	}

	int option4;

	InfoMenuNodeID();

	while ((scanf("%d",&option4)) != EOF)
	{
		switch(option4)
		{
			case 1:
				InfoMenuIDhexLED();
				IDhexLED();
				break;
			case 2:
				InfoMenuIDhexLCD();
				IDhexLCD();
				break;
			default:
				printf("\nPodaj prawidlowa wartosc!\n");
		}

		InfoMenuNodeID();
	}
}
