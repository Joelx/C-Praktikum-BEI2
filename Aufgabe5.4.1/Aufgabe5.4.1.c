/**********************************************************************\
* Kurzbeschreibung: Uebung: 5.4.1; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 23.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>


int main(void)
{
	int wert, x = 1, y = 7, z = 15, jahr = 2100, a = -15, b = 10, zaehler = 30;
	char antwort = 'A';

	// 1. ob der Wert der Variablen a im Intervall [-20,100] liegt:
	wert = a >= -20 && a <= 100;
	printf("1.Wert: %d\n", wert);
	// 2. ob Wert der Variablen x negativ ist, aber zugleich auch der Wert der Variablen y im Intervall[5, 30] liegt:
	wert = x < 0 && (y >= 7 && y <= 30);
	printf("2.Wert: %d\n", wert);
	// 3. ob Wert der ganzzahligen Variablen z ungerade ist und	zugleich auch durch 3 und 5 teilbar ist :
	wert = z % 2 != 0 && z % 3 == 0 && z % 5 == 0;
	printf("3.Wert: %d\n", wert);
	// 4. ob der Wert der ganzzahligen Variablen jahr -durch 400 oder - durch 4, aber nicht durch 100 teilbar ist(Bedingung für ein Schaltjahr) :
	wert = jahr % 400 == 0 || jahr % 4 == 0 && jahr % 100 != 0;
	printf("4.Wert: %d\n", wert);
	// 5. ob das Produkt der beiden int-Variablen a und b in den Datentyp unsigned char	ohne Überlauf untergebracht werden kann :
	a = 25;
	wert = a * b < 0x100 && a * b >= 0; // ueberpruefe, ob Wert in 8-bit passt und nicht negativ ist (unsigned char)
	printf("5.Wert: %d\n", wert);
	// 6. ob der Wert der char-Variablen antwort weder das Zeichen ’j’ noch das Zeichen ’J’ enthält :
	wert = antwort != 'J' && antwort != 'j';
	printf("6.Wert: %d\n", wert);
	// 7. ob der Wert der int-Variablen zaehler nicht im Intervall [5,25] liegt:
	wert = zaehler < 5 || zaehler > 25;
	printf("7.Wert: %d\n", wert);

	return 0;
}
