#include <stdio.h>
#include <time.h>

int main()
{
	int anzKugeln, anzGezogeneKugeln;
	char term;

	srand(time(NULL)); // Seede den Zufallszahlengenerator mit einer dynamischen Zahl.. der Zeit

	printf("Wieviele Kugeln sollen zur Verfuegung stehen (mind. 1 und max 100):\n");
	while ((scanf("%d%c", &anzKugeln, &term) != 2 || term != '\n') || anzKugeln < 1 || anzKugeln > 100) {
		while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden

		printf("Bitte nur eine Zahl zwischen 1 und 100 eingeben!: > ");
	}


	printf("Wieviele werden davon gezogen (mind. 1 und max. %d): ", anzKugeln);
	while ((scanf("%d%c", &anzGezogeneKugeln, &term) != 2 || term != '\n') || anzGezogeneKugeln < 1 || anzGezogeneKugeln > anzKugeln) {
		while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden

		printf("Bitte nur eine Zahl zwischen 1 und 49 eingeben!: > ");
	}

	int *zufallszahlen = malloc(anzGezogeneKugeln*sizeof(*zufallszahlen));

	printf("==== %d aus %d ====\n", anzGezogeneKugeln, anzKugeln);
	for (int i = 0; i < anzGezogeneKugeln; i++)
	{
		zufallszahlen[i] = rand() % anzKugeln + 1; // generiere Zufallszahl zwischen 1 und der angegebenen Obergrenze
		printf("%d\t", zufallszahlen[i]);
	}
	printf("\n");

	return 0;
}
