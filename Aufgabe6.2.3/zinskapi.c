/**********************************************************************\
* Kurzbeschreibung: Uebung: 6.2.3; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>

int main(void)
{
	float anfangskapital, jahreszins, zinsen;
	int dauerInTagen;

	printf("Anfangskapital: ");
	scanf("%f", &anfangskapital);
	printf("Jahreszins (in %): ");
	scanf("%f", &jahreszins);
	printf("Wieviele Tage soll Kapital angelegt werden: ");
	scanf("%i", &dauerInTagen);
	
	zinsen = (anfangskapital*jahreszins*dauerInTagen) / (100 * 360);

	printf("\nAnfangskapital:\t\t\t%.2f\n", anfangskapital);
	printf("Zinsen (nach %i Tagen):\t%.2f\n", dauerInTagen, zinsen);
	printf("---------------------------------------------------------------\n");
	printf("Endkapital:\t\t\t%.2f\n", anfangskapital + zinsen);

	return 0;
}
