/**********************************************************************\
* Kurzbeschreibung: Uebung: 7.1.1; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include "faktor.h"

int main(void)
{
	float meter, sekunden;

	printf("Gib eine Strecke ein (in Meter): ");
	scanf("%f", &meter);
	printf("Gib Zeit ein, die dafuer benoetigt wird (in Sekunden): ");
	scanf("%f", &sekunden);

	printf("Dies entspricht folgender Geschwindigkeit:\n");
	printf("\t%f m/sec =\n", meter / sekunden);
	printf("\t\t%f km/h = \n", (meter / sekunden) * MS_NACH_KMH);
	printf("\t\t\t%f m/Tag =\n", (meter / sekunden) * MS_NACH_MTAG);
	printf("\t\t\t\t%f km/Tag\n", (meter / sekunden) * MS_NACH_KMTAG);

	return 0;
}
