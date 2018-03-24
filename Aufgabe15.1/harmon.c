/**********************************************************************\
* Kurzbeschreibung: Uebung: 15.1; Punkte: 2
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>


int main(void)
{
	int n;
	float summe = 0.0;

	printf("Bis zu welchem n soll diese Reihe berechnet werden: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		summe += 1.0 / i;
	}

	printf("Summe bis 1/%d: %f\n", n, summe);

	return 0;
}
