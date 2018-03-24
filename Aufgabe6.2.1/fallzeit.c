/**********************************************************************\
* Kurzbeschreibung: Uebung: 6.2.1; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include <math.h>
/*--- constants -------------------------------------------------------*/
const float earthGravitation = 9.80665;

int main(void)
{
	float hoehe;

	printf("Hoehe des Koerpers (in m) ? ");
	scanf("%f", &hoehe);	
	printf("Fallzeit: %f Sek\n", sqrt((2*hoehe)/earthGravitation));

	return 0;
}
