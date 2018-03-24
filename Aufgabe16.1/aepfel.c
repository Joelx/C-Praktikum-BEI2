/**********************************************************************\
* Kurzbeschreibung: Uebung: 16.1; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>


int main(void)
{
	int anzAepfel, i = 1, fritzAPR = 5, hansAPR = 3;

	printf("Wieviele Aepfel haben Fritz und Hans gekauft: ");
	scanf("%d", &anzAepfel);

	while ((anzAepfel % 8 != 0) || (anzAepfel < 0)) {
		printf("Sorry, aber die Zahl der Aepfel muss eine durch 8 teilbare, positive Zahl sein.\n");
		printf("Gib eine neue Zahl ein: ");
		scanf("%d", &anzAepfel);
	}

	printf("Runde | Fritz | Hans | Rest |\n");
	printf("------+-------+------+------|\n");

	while (anzAepfel > 0) {
		anzAepfel -= 8;
		printf("   %2i |    %2i |   %2i |  %3i |\n", i, fritzAPR, hansAPR, anzAepfel);
		i += 1, fritzAPR += 5, hansAPR += 3;
	}

	return 0;
}
