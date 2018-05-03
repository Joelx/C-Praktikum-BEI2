/**********************************************************************\
* Kurzbeschreibung: Uebung: 13.2; Punkte: 2
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include <ctype.h>

/*--- #defines ------------------------------------------------------*/
#define PI 3.14f

int main(void)
{
	char eingabe, c;
	int valid = 0;
	float laenge_1 = 0.0, laenge_2 = 0.0, radius_x = 0.0, radius_y = 0.0;

	printf("\tQuadrat:\tq\n");
	printf("\tRechteck:\tr\n");
	printf("\tKreis:\t\tk\n");
	printf("\tEllipse:\te\n");

	printf("Deine Wahl? ");

	do {
		scanf("%c", &eingabe);
		if (eingabe != 'q' && eingabe != 'r' && eingabe != 'k' && eingabe != 'e') {
			printf("Bitte nur eine der vier Optionen waehlen.\n");
			while ((c = getchar()) != '\n' && c != EOF);
			valid = 0;
		}
		else {
			valid = 1;
		}
	} while (valid != 1);

	switch (eingabe) {
	case 'q':
		do {
			printf("Seitenlaenge des Quadrats: ");
			valid = scanf("%f", &laenge_1);
			while ((c = getchar()) != '\n' && c != EOF);
		} while (valid != 1);
		printf("Flaeche = %.02f\n", (float)(laenge_1 * laenge_1));
		break;
	case 'r':
		do {
			printf("Laenge 1. Rechtecksseite: ");
			valid = scanf("%f", &laenge_1);
			while ((c = getchar()) != '\n' && c != EOF);
		} while (valid != 1);
		do {
			printf("Laenge 2. Rechtecksseite: ");
			valid = scanf("%f", &laenge_2);
			while ((c = getchar()) != '\n' && c != EOF);
		} while (valid != 1);
		printf("Flaeche = %.02f\n", (float)(laenge_1 * laenge_2));
		break;

	case 'k':
		do {
			printf("Radius d. Kreises: ");
			valid = scanf("%f", &radius_x);
			while ((c = getchar()) != '\n' && c != EOF);
		} while (valid != 1);
		printf("Flaeche = %.02f\n", (float)(radius_x * radius_x * PI));
		break;
	case 'e':
		do {
			printf("Radius x d. Ellipse: ");
			valid = scanf("%f", &radius_x);
			while ((c = getchar()) != '\n' && c != EOF);
		} while (valid != 1);
		do {
			printf("Radius y d. Ellipse: ");
			valid = scanf("%f", &radius_y);
			while ((c = getchar()) != '\n' && c != EOF);
		} while (valid != 1);
		printf("Flaeche = %.02f\n", (float)(radius_x * radius_y * PI));
		break;
	
	default: printf(".... Ihre Wahl '%c' ist unerlaubt ....\n", eingabe);
	}

	return 0;
}
