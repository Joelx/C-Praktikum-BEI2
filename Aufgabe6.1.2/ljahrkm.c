/**********************************************************************\
* Kurzbeschreibung: Uebung: 6.1.2; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
/*--- #defines -------------------------------------------------------*/
#define LJAHR_IN_KM 9.4605*10e12

int main(void)
{
	float ljahre;

	printf("Wieviele Lichtjahre: ");
	scanf("%f", &ljahre);
	printf("%f Kilometer\n", ljahre * LJAHR_IN_KM);

	return 0;
}
