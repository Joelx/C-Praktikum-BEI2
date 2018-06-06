/**********************************************************************\
* Kurzbeschreibung: Uebung: 16.2; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>


int main(void)
{
	int iZahl, ok = 0;
	char term;

	while (ok == 0) {

		printf("Bitte zahl zwischen 1 und 100 eingeben. \n> ");

		// Pruefe, ob Eingabe gueltige Zahl war
		while (scanf("%d%c", &iZahl, &term) != 2 || term != '\n') {

			while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden

			printf("Sorry, aber du musst eine gueltige Zahl eingeben.\n");
			printf("Gib eine neue Zahl ein.\n> ");

			
		}

		if (iZahl <= 1 || iZahl >= 100) {
			printf("Zahl muss zwischen 1 und 100 liegen.\n");
		}
		else {
			ok = 1;
		}

		
	}

	printf("\nDeine Zahl: %d\n", iZahl);
}
