/**********************************************************************\
* Kurzbeschreibung: Uebung: 17.1; Punkte: 3
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
	int intervallGrenze, versuch, zufallsZahl, i = 1;
	char term;

	printf("Ich denke mir eine Zahl aus dem Intervall [1,x].\nDu musst dann versuchen, diese Zahl zu erraten.\n\n");
	printf("Zunaechst musst du einmal festlegen, wie gross die zu ratende Zahl maximal sein darf: ");
	
	// Pruefe, ob Eingabe gueltige Zahl war
	while (scanf("%d%c", &intervallGrenze, &term) != 2 || term != '\n') {
		while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden
		printf("Sorry, aber du musst eine gueltige Zahl eingeben.\n");
		printf("Gib eine neue Zahl ein: ");
	}

	srand(time(0)); // Seede den Zufallszahlengenerator mit einer dynamischen Zahl.. der Zeit
	zufallsZahl = (rand() % intervallGrenze) + 1; // generiere Zufallszahl zwischen 1 und der angegebenen Obergrenze
	printf("Hm.... OK, ich habe eine Zahl \n\n");

	do {
		printf("Dein %d. Versuch: ", i);
		if (scanf("%d%c", &versuch, &term) != 2 || term != '\n') {
			while ((getchar()) != '\n');
			printf("Bitte nur Zahlen eingeben!\n");
			continue;
		}
		if (versuch < zufallsZahl) {
			printf("........ zu niedrig\n");
		}
		else if (versuch > zufallsZahl) {
			printf("........ zu hoch\n");
		}
		else if (versuch == zufallsZahl) {
			printf("........ Richtig!!!\n");
		}
		else {
			printf("Gib eine gueltige Zahl ein!\n");
		}
		i++;
	} while (versuch != zufallsZahl);

	printf("\nDu hast %d Versuche benoetigt.\n", i);

	return 0;
}
