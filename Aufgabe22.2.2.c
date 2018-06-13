#include <stdio.h>


int bitPruefen(int pos, char *bytef) 
{
	if (bytef[pos] == '1') {
		return 1;
	}
	else {
		return 0;
	}
}

void bitSetzen(int pos, char *bytef) 
{
	bytef[pos] = '1';
}

void bitLoeschen(int pos, char *bytef)
{
	bytef[pos] = '0';
}

void bitNegieren(int pos, char *bytef)
{
	if (bytef[pos] == '1')
		bytef[pos] = '0';
	else
		bytef[pos] = '1';
}

int main()
{
	char bytefolge[9], term;
	int n = 8, c, ok = 0, bitpos, auswahl = 0;

	printf("Bitte geben Sie 1 Byte als binaere Folge ein:\n");
	

	while (ok != 1) 
	{
		scanf("%s", &bytefolge);

		for (c = 0; c < n-1; c++)
		{
			if (bytefolge[c] != '0' && bytefolge[c] != '1') {
				printf("Bitte gueltige Bytefolge eingeben! \n");
				break;
			}
			
		}
		if (c == 7) {
			ok = 1;
			break;
		}
	}

	while (auswahl != 5) {
		printf("Auf welche Bitposition soll sich die Operation beziehen? (7..0): ");
		while ((scanf("%d%c", &bitpos, &term) != 2 || term != '\n') || bitpos < 0 || bitpos > 7) {
			while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden

			printf("Bitte nur eine Zahl zwischen 0 und 7 eingeben!: > ");
		}

		switch (bitpos) {
			case 0: bitpos = 7; break;
			case 1: bitpos = 6; break;
			case 2: bitpos = 5; break;
			case 3: bitpos = 4; break;
			case 4: bitpos = 3; break;
			case 5: bitpos = 2; break;
			case 6: bitpos = 1; break;
			case 7: bitpos = 0; break;
		}

		printf("1: Bit pruefen\n2: Bit setzen\n3: Bit ruecksetzen\n4: Bit negieren\n5: Ende\nIhre Wahl: ");
		while ((scanf("%d%c", &auswahl, &term) != 2 || term != '\n') || auswahl < 1 || auswahl > 5) {
			while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden

			printf("Bitte nur eine Zahl zwischen 1 und 5 eingeben!: ");
		}

		switch (auswahl) {
		case 1: 
			if (bitPruefen(bitpos, bytefolge))
				printf("Das bit %d im Byte ist gesetzt.\n", bitpos);
			else 
				printf("Das bit %d im Byte ist nicht gesetzt.\n", bitpos);
			break;
		case 2:
			bitSetzen(bitpos, bytefolge);
			break;
		case 3:
			bitLoeschen(bitpos, bytefolge);
			break;
		case 4: 
			bitNegieren(bitpos, bytefolge);
			break;
		}

		printf("Aktuelles Bitmuster: %s\n", bytefolge);
	}
	
	return 0;
}
