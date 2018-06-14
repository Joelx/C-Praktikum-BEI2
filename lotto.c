#include <stdio.h>
#include <time.h>

int main()
{
	int anzKugeln, anzGezogeneKugeln, *zufallszahlen;
	char term;

	srand(time(NULL)); // Seede den Zufallszahlengenerator mit einer dynamischen Zahl.. der Zeit

	printf("Wieviele Kugeln sollen zur Verfuegung stehen (mind. 1 und max 100):\n");
	while ((scanf("%d%c", &anzKugeln, &term) != 2 || term != '\n') || anzKugeln < 1 || anzKugeln > 100) {
		while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden

		printf("Bitte nur eine Zahl zwischen 1 und 100 eingeben!: > ");
	}


	printf("Wieviele werden davon gezogen (mind. 1 und max. 49): ");
	while ((scanf("%d%c", &anzGezogeneKugeln, &term) != 2 || term != '\n') || anzGezogeneKugeln < 1 || anzGezogeneKugeln > 49) {
		while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden

		printf("Bitte nur eine Zahl zwischen 1 und 49 eingeben!: > ");
	}

	int *zufallszahlen = malloc(sizeof(int)*anzGezogeneKugeln);

	for (int i = 0; i < sizeof(zufallszahlen); i++)
	{
		zufallszahlen[i] = rand() % anzKugeln + 1; // generiere Zufallszahl zwischen 1 und der angegebenen Obergrenze
		printf("%d\n", zufallszahlen[i]);
	}




	


	return 0;
}
