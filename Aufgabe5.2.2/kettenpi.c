/**********************************************************************\
* Kurzbeschreibung: Uebung: 5.2.2; Punkte: 4
*
* Datum:       Autor:                Grund der Aenderung:
* 23.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*---- kettenpi.c -------------------------------------------------*/
/*-----------------------------------------------------------------*/
#include <stdio.h>

int main(void)
{
	float pi;

	pi = 3.0 + (1.0 / (7.0 + 1.0 / (15.0 + 1.0 / (1.0 + 1.0 / (292.0 + 1.0 / 2.0)))));
	
	printf("Pi = %f\n", pi);
	return(0);
}