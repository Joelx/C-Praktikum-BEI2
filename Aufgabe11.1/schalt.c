/**********************************************************************\
* Kurzbeschreibung: Uebung: 11.1; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int jahr = 0, valid = 0;
	char c;


	do {
		printf("Gib eine gueltige Jahreszahl ein: ");
		valid = scanf("%d", &jahr);
		if (valid != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
		}
	} while (valid != 1);
		

	if (jahr % 4 == 0) {
		if (jahr % 100 == 0) {
			if (jahr % 400 == 0) {
				printf("Schaltjahr\n");
			}
			else {
				printf("Kein Schaltjahr\n");
			}
		}
		else {
			printf("Schaltjahr\n");
		}
	}
	else {
		printf("Kein Schaltjahr\n");
	}

	return 0;
}
