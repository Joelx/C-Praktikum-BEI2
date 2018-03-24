/**********************************************************************\
* Kurzbeschreibung: Uebung: 6.1.3; Punkte: 4
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
/*--- #defines -------------------------------------------------------*/
#define PI 3.141592

int main(void)
{
	double radius, neuerAbstand;

	printf("Welchen Radius hat Koerper, um den Seil gelegt wird (in m) ? ");
	scanf("%lf", &radius);
	neuerAbstand = ((radius + 1.0) / (2.0 * PI)) - (radius / (2.0 * PI));
	printf("Nach Verlaengerung des Seils um 1 Meter steht es um %lf cm ab\n", neuerAbstand * 10e1);

	return 0;
}
