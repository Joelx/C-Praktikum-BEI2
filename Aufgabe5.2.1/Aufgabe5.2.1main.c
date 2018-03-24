/**********************************************************************\
* Kurzbeschreibung: Uebung: 5.2.1; Punkte: 4
*
* Datum:       Autor:                Grund der Aenderung:
* 23.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>


int main(void)
{
	float term1, term2;

	term1 = (18 / 2) * ((4 + 5) / (9 - 6)) % (6 + 8 / 4);
	term2 = (4 - 10 + ((100 + 100 - 40 + 80) / (5 * 2 * 4) + 36)) / ((90 - 30) / (10 - 5));

	printf("Term 1: %f\nTerm 2: %f\n", term1, term2);

	return 0;
}
