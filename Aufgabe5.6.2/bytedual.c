/**********************************************************************\
* Kurzbeschreibung: Uebung: 5.6.2; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>


int main(void)
{
	char zeichen = 'e';

	printf("%d", (zeichen >> 7) & 1);
	printf("%d", (zeichen >> 6) & 1);
	printf("%d", (zeichen >> 5) & 1);
	printf("%d", (zeichen >> 4) & 1);
	printf("%d", (zeichen >> 3) & 1);
	printf("%d", (zeichen >> 2) & 1);
	printf("%d", (zeichen >> 1) & 1);
	printf("%d\n", zeichen & 1);

	return 0;
}
