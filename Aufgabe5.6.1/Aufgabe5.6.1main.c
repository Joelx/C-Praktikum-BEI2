/**********************************************************************\
* Kurzbeschreibung: Uebung: 5.6.1; Punkte: 4
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>


int main(void)
{
	unsigned short x = 0xab12;

	x = x >> 8 | x << 8; // steht genau so im Hinweis der Aufgabenstellung lol
	printf("%x\n", x);

	return 0;
}
