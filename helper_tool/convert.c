#include "libapds.h"
#include <stdio.h>

void convert()
{
	void InfoMenuKonwersji()
	{
		printf("\n________________________________________________________________________________________________\n");
		printf(" Wybierz tryb konwersji:\n");
		printf(" (Wprowadz jedna z cyfr odpowadajacych podanym tryba konwersji, a nastepnie nacisnij ENTER)\n\n");
	
		printf(" 1  --> Znaki ASCII na liczby decymalne\n");
		printf(" 2  --> Znaki ASCII na liczby hexadecymalne (W ROZWOJU)\n");
		printf(" 3  --> Znaki ASCII na liczby binarne (W ROZWOJU)\n\n");

		printf(" 4  --> Liczby decymalne na znaki ASCII\n");
		printf(" 5  --> Liczby decymalne na liczby hexadecymalne (W ROZWOJU)\n");
		printf(" 6  --> Liczby decymalne na liczby binarne (W ROZWOJU)\n\n");

		printf(" 7  --> Liczby hexadecymalne na znaki ASCII (W ROZWOJU)\n");
		printf(" 8  --> Liczby hexadecymalne na liczby decymalne (W ROZWOJU)\n");
		printf(" 9  --> Liczby hexadecymalne na liczby binarne (W ROZWOJU)\n\n");

		printf(" 10  --> Liczby binarne na znaki ASCII (W ROZWOJU)\n");
		printf(" 11  --> Liczby binarne na liczby decymalne (W ROZWOJU)\n");
		printf(" 12  --> Liczby binarne na liczby hexadecymalne (W ROZWOJU)\n");

		printf(" \n(Aby wrocic do menu glownego nacisni:  CTRL + Z , a nastepnie nacisnij ENTER)\n");
		printf("________________________________________________________________________________________________\n");
	}

	void ASCIItoDEC()	
{
	char c ;
	while ((c = getchar()) != EOF)
	{
	if (c!=10)
	printf("%d  ",c);
	}
}
	void ASCIItoHEX()
	{}
	void ASCIItoBIN()
	{}

	void DECtoASCII()
{
	int d;
	while ((scanf("%d",&d)) != EOF)
	{
		if(d>=0)
		printf("%c  ",d);
	}
}
	void DECtoHEX()
	{	
		int d;
		while ((scanf("%d",&d)) != EOF)
		{
		if(d>=0)
		printf("%x  ",d);
		}
	}
	void DECtoBIN()
	{}
	
	void HEXtoASCII()
	{}
	void HEXtoDEC()
	{
	}
	void HEXtoBIN()
	{}

	void BINtoASCII()
	{}
	void BINtoDEC()
	{}
	void BINtoHEX()
	{}


	void InfoMenuASCIItoDEC()
{
	printf("\n________________________________________________________________________________________________\n");
	printf(" \nWlaczono tryb konwersji znakow ASCII na liczby decymalne\n");
	printf(" (Podaj znak lub znaki do konwersji, a nastepnie nacisnij ENTER) \n");
	printf(" \n (Aby wrocic do menu konwersji nacisnij:  CTRL + Z , a nastepnie nacisnij ENTER)\n");
	printf("________________________________________________________________________________________________\n");
}
	void InfoMenuASCIItoHEX()
	{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
	}
	void InfoMenuASCIItoBIN()
	{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
	}

	void InfoMenuDECtoASCII()
{
	printf("\n________________________________________________________________________________________________\n");
	printf(" \nWlaczono tryb konwersji liczb  decymalnych na znaki ASCII\n");
	printf(" (Podaj liczbe lub liczby do konwersji, a nastepnie nacisnij ENTER) \n");
	printf(" \n (Aby wrocic do menu konwersji nacisnij:  CTRL + Z , a nastepnie nacisnij ENTER)\n");
	printf("________________________________________________________________________________________________\n");
}
	void InfoMenuDECtoHEX()
	{
printf("\n________________________________________________________________________________________________\n");
	printf(" \nWlaczono tryb konwersji liczb  decymalnych na liczby hexadecymalne\n");
	printf(" (Podaj liczbe lub liczby do konwersji, a nastepnie nacisnij ENTER) \n");
	printf(" \n (Aby wrocic do menu konwersji nacisnij:  CTRL + Z , a nastepnie nacisnij ENTER)\n");
	printf("________________________________________________________________________________________________\n");
	}
	void InfoMenuDECtoBIN()
	{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
	}
	
	void InfoMenuHEXtoASCII()
	{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
	}
	void InfoMenuHEXtoDEC()
	{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
	}
	void InfoMenuHEXtoBIN()
	{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
	}

	void InfoMenuBINtoASCII()
	{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
	}
	void InfoMenuBINtoDEC()
	{
	printf("\(W ROZWOJU)\n");
	printf("Wybierz inny tryb!\n");	
	}
	void InfoMenuBINtoHEX()
	{
	printf("\(W ROZWOJU)\n");
		printf("\(Pozycja 12)\n");
	printf("Wybierz inny tryb!\n");	
	}
	

	int option2;

	InfoMenuKonwersji();

	while ((scanf("%d",&option2)) != EOF)
	{
		switch(option2)
		{
			case 1:
				InfoMenuASCIItoDEC();
				ASCIItoDEC();
				break;
			case 2:
				InfoMenuASCIItoHEX();
				ASCIItoHEX();
				break;
			case 3:
				InfoMenuASCIItoBIN();
				ASCIItoBIN();
				break;
			case 4:
				InfoMenuDECtoASCII();
				DECtoASCII();
				break;
			case 5:
				InfoMenuDECtoHEX();
				DECtoHEX();
				break;
			case 6:
				InfoMenuDECtoBIN();
				DECtoBIN();
				break;
			case 7:
				InfoMenuHEXtoASCII();
				HEXtoASCII();
				break;
			case 8:
				InfoMenuHEXtoDEC();
				HEXtoDEC();
				break;
			case 9:
				InfoMenuHEXtoBIN();
				HEXtoBIN();
				break;
			case 10:
				InfoMenuBINtoASCII();
				BINtoASCII();
				break;
			case 11:
				InfoMenuBINtoDEC();
				BINtoDEC();
				break;
			case 12:
				InfoMenuBINtoHEX();
				BINtoHEX();
				break;
			default:
				printf("\nPodaj prawidlowa wartosc!\n");
		}

		InfoMenuKonwersji();

	}
}
