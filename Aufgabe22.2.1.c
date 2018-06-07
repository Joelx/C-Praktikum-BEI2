/**********************************************************************\
* Kurzbeschreibung: Uebung: menue; Punkte: 0
*
* Datum:       Autor:      Grund der Aenderung:
* 01.10.2011   Name        Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <math.h>

/*--- Funktionsdefinitionen ------------------------------------------*/
//Variablen für 1. Programmabschnitt

float laenge(int x, int y)
{
	float uebergabe = 0;
	uebergabe = sqrt(x*x + y*y);

	return uebergabe;
}



int main(void)
{
	int start1 = 0, start2 = 0, test3 = 0, ueber1 = 0, ueber2 = 0, wert1 = 0, wert2 = 0;
	char test1 = 0, test2 = 0;
	float wert = 0;

	printf("Strecken-Berechnungen\n");
	printf("=====================\n\n\n");

	printf("Bitte Startpunkt eingeben (x,y): ");

	while (scanf("%d%c", &start1, &test1) != 2 || scanf("%d%c", &start2, &test2) != 2)
	{
		printf("Bitte geben Sie zwei ganzzahlige Zahlen, welche durch \nein Komma getrennt sind ein!: ");
		fflush(stdin);
	}

	do
	{
		printf("Neuer Streckenpunkt x,y (Abbruch mit x=-1): ");



		while ((scanf("%d%c", &wert1, &test1) != 2 || wert1 == -1) || scanf("%d%c", &wert2, &test2) != 2)
		{
			if (wert1 == -1) {
				break;
			}

			printf("Bitte geben Sie zwei ganzzahlige Zahlen, welche durch \nein Komma getrennt sind ein!: ");
			fflush(stdin);
		}

		//printf("wert1: %d, wert2: %d\n", wert1, wert2);
		if (wert1 != -1)

		{
			ueber1 = wert1 - start1;
			ueber2 = wert2 - start2;

			start1 = wert1;
			start2 = wert2;

			wert += laenge(ueber1, ueber2);
		}
	} while (wert1 != -1);

	printf("Die Streckenlaenge betraegt: %.2f Einheiten", wert);



	getchar(); /*Ggf. noetig um Fenster offen zu halten (unter Windows)*/
	return 0;
}
