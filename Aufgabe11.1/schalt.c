/**********************************************************************\
* Kurzbeschreibung: Uebung: 11.1; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>


int main(void)
{
	int jahr;

	printf("Gib ein Jahr ein: ");
	scanf("%d", &jahr);

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
