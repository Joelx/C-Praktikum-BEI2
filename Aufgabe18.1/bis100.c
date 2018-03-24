/**********************************************************************\
* Kurzbeschreibung: Uebung: 18.1; Punkte: 4
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include <time.h>


int main(void)
{
	int wurf, rundenPunktzahl = 0, punkteSpieler1 = 0, punkteSpieler2 = 0, anzahlWuerfe = 0;
	int anzahlDurchlaeufe = 0;
	char nochmalSpielen = 'n';

	srand(time(NULL)); // Seede den Zufallszahlengenerator mit einer dynamischen Zahl.. der Zeit
	printf("Wuerfelspiel Bis 100 - Game of the Year Edition\n\n");

	do {
		if (nochmalSpielen == 'j') {
			system("cls");
			printf("Wuerfelspiel Bis 100 - Game of the Year Edition\n\n");
			rundenPunktzahl = 0, punkteSpieler1 = 0, punkteSpieler2 = 0;
		}
		
		printf("Du bist am Zug. Moechtest du wuerfeln? (j/n)\n");

		while (getchar() == 'j') {
			while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden
			wurf = rand() % 6 + 1; // generiere Zufallszahl zwischen 1 und der angegebenen Obergrenze		
			if (wurf == 1) {
				printf("Du hast eine 1 gewuerfelt. Die Runde ist vorbei.");
				rundenPunktzahl = 0;
				break;
			}
			else {
				rundenPunktzahl += wurf;
			}
			printf("Du hast %i gewurfelt. Nochmal wuerfeln? (j/n) ", wurf);
		}
		punkteSpieler1 += rundenPunktzahl;
		printf("Du hast %i Punkte erspielt.\nDein Gesamtpunktestand betraegt nun %i\n\n", rundenPunktzahl, punkteSpieler1);
		if (punkteSpieler1 >= 100) {
			printf("Du hast das Spiel gewonnen! Moechtest du nochmal spielen? (j/n) ");
			nochmalSpielen = getchar();
			if (nochmalSpielen != 'j') { break; }
			else { continue; }
		}
		rundenPunktzahl = 0;
		while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden

		printf("Spieler 2 beginnt nun mit seinen Wuerfen\n===============\n");
		while (rundenPunktzahl <= 19 && anzahlWuerfe < 5) {
			wurf = rand() % 6 + 1;
			if (wurf == 1) {
				printf("Spieler 2 hat eine 1 gewuerfelt. Seine Runde ist vorbei.\n");
				rundenPunktzahl = 0;
				break;
			}
			else {
				rundenPunktzahl += wurf;
			}
			printf("Spieler 2 wuerfelt %i \n", wurf);
		}
		punkteSpieler2 += rundenPunktzahl;
		printf("Spieler 2 hat %i Punkte erspielt.\nSein Gesamtpunktestand betraegt nun %i\n\n", rundenPunktzahl, punkteSpieler2);
		if (punkteSpieler2 >= 100) {
			printf("Spieler 2 hat das Spiel gewonnen! Moechtest du nochmal spielen? (j/n) ");
			nochmalSpielen = getchar();
			if (nochmalSpielen != 'j') { break; }
			else { continue; }
		}
		rundenPunktzahl = 0, anzahlWuerfe = 0;
		nochmalSpielen = 'n';
		while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden
		
	} while (1);

	return 0;
}
