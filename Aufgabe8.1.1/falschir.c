/**********************************************************************\
* Kurzbeschreibung: Uebung: 8.1.1; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include <math.h>
/*--- constants ------------------------------------------------------*/
const int RIP = 650;
const float erdGrav = 9.81;

int main(void)
{
	int absprunghoehe, sekundenImFreienFall;

	printf("In welcher Hoehe verlaesst der Fallschirmspringer den Flieger: ");
	scanf("%d", &absprunghoehe);

	sekundenImFreienFall = (int)sqrt(((absprunghoehe - RIP) * 2.0 ) / erdGrav); // Freier Fall: t^2 = (h*2)/g
	
	printf("Springer muss nach %i Sekunden die Reissleine ziehen\n", sekundenImFreienFall);

	return 0;
}
