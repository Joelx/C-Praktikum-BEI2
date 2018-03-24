/**********************************************************************\
* Kurzbeschreibung: Uebung: 6.2.2; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>

int main(void)
{
	float gefStunden, gefMinuten, gefKilometer, gebrLiter, durchschnitGeschw;

	printf("Gefahrene Stunden: ");
	scanf("%f", &gefStunden);
	printf("Gefahrene Minuten: ");
	scanf("%f", &gefMinuten);
	printf("Gefahrene Kilometer: ");
	scanf("%f", &gefKilometer);
	printf("Gebrauchte Liter: ");
	scanf("%f", &gebrLiter);

	durchschnitGeschw = gefKilometer / (gefStunden + gefMinuten / 60);
	printf("Durchschnittl. Geschwindigkeit: %.2f km/h (%.2f m/s)\n", durchschnitGeschw, durchschnitGeschw / 3.6);
	printf("Durchschnittl. Benzinverbrauch: %.2f l/100km\n", (gebrLiter / gefKilometer) * 100);

	return 0;
}
