/**********************************************************************\
* Kurzbeschreibung: Uebung: 13.1; Punkte: 2
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>


int main(void)
{
	char eingabe;

	printf("\tHauptmenue\n\t==========\n\n");
	printf("(A)endern\n(B)eenden\n(D)rucken\n(E)ingeben\n(L)oeschen\n\n");
	printf("Was wuenschen Sie zu tun ? ");
	scanf("%c", &eingabe);

	switch (eingabe) {
	case 'A':
	case 'a': 
		printf(".... Sie haben (A)endern gewaehlt ....\n"); break;
	case 'B':
	case 'b': 
		printf(".... Sie haben (B)eenden gewaehlt ....\n"); break;
	case 'D':
	case 'd': 
		printf(".... Sie haben (D)rucken gewaehlt ....\n"); break;
	case 'E':
	case 'e': 
		printf(".... Sie haben (E)ingeben gewaehlt ....\n"); break;
	case 'L':
	case 'l': 
		printf(".... Sie haben (L)oeschen gewaehlt ....\n"); break;
	default: printf(".... Ihre Wahl '%c' ist unerlaubt ....\n", eingabe);
	}

	return 0;
}
