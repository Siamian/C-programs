#include <stdio.h>
#include "libapds.h"

void infoMenu()
{
	printf("\n________________________________________________________________________________________________\n");
	printf(" Wybierz program:\n");
	printf(" (Wprowadz jedna z cyfr odpowadajacych podanym programom, a nastepnie nacisnij ENTER)\n\n");
	
	printf(" 1  --> Wyszukaj czestotliwosc lub kanal (W ROZWOJU)\n");
	printf(" 2  --> Konwersja Node ID (W ROZWOJU)\n");
	printf(" 3  --> Tworzenie kodu ADMO do galepa (W ROZWOJU)\n");
	printf(" 4  --> Konwersja liczb i znakow\n");

	printf(" \n(Aby wyjsc z programu nacisni:  CTRL + Z , a nastepnie nacisnij ENTER)\n");
	printf("________________________________________________________________________________________________\n");
}

int main()
{

	int option;

	infoMenu();

	while ((scanf("%d",&option)) != EOF)
	{
		switch(option)
		{
			case 1:
				hz();
				break;
			case 2:
				nodeID();		
				break;
			case 3:
				admo();
				break;
			case 4:
				convert();
				break;
			default:
				printf("\nPodaj prawidlowa wartosc!\n");
		}

		infoMenu();

	}


	return 0;
}