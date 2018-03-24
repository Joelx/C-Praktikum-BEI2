/**********************************************************************\
* Kurzbeschreibung: Uebung: 5.5.1; Punkte: 4
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>


int main(void)
{
	short x = 7;
	unsigned short u = 255;
	int wert;

	// 1. ob der Wert der short-Variablen x ungerade ist.
	wert = x & 1; // prueft, ob 1er Bit gesetzt ist 
	printf("1. Wert: %d\n", wert);
	// 2. ob der Wert der unsigned short - Variablen u groesser als 255 ist.
	wert = !!(u >> 8); // schiebe zahl um 8 bit nach rechts. Wenn nicht 0 zurueckbleibt, war die Zahl mindestens 256.
	// Alternativ geht auch sowas hier:  
	// wert = !!(u & 0x100); 
	printf("2. Wert: %d\n", wert);
	// 3. ob das 7.Bit (von links her gezählt) in der unsigned short-Variablen u auf 1 gesetzt ist.
	u = 520;
	wert = (u >> 7) & 1;
	printf("3. Wert: %d\n", wert);
	// 4. ob der Wert der short-Variablen x im Intervall [0,127] liegt.
	x = 120;
	wert = !(x >> 7) && !(x & 0x8000); // schiebe Wert um den Dezimalwert 128 nach rechts. Wenn nur 0 uebrig bleibt, war Zahl im Intervall. Fange ausserdem negative Zahlen ab (1. Bit von links darf nicht gesetzt sein)
	printf("4. Wert: %d\n", wert);
	// 5. ob der Wert der unsigned short-Variablen u durch 4 teilbar ist.
	u = 43;
	wert = !(u & 3); // Solange weder das 2^0 noch das 2^1 Bit gesetzt sind (Addition um 1,2 oder 3), ist jede Binaerzahl durch 4 teilbar.
	printf("5. Wert: %d\n", wert);

	return 0;
}
