#include <stdio.h>



void fuelleMatrix(int zeilen, int spalten, float *mat);
void multipliziereMatrix(int zeilenA, int spaltenA, int zeilenB, int spaltenB, float *matA, float *matB, float *erg);
void gebeMatrixAus(int zeilen, int spalten, float *mat);

int main()
{
	int spA, zeiA, spB, zeiB, ok = 0;
	char komma, term;

	while (ok != 1)
	{
		printf("Zeilen,Spalten der 1. Matrix:\n");
		while (scanf("%d%c%d%c", &zeiA, &komma, &spA, &term) != 4 || term != '\n' || komma != ',') {
			while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden

			printf("Bitte nur im Format 2,2 oder 4,3 usw eingeben: ");
		}
		printf("Zeilen,Spalten der 2. Matrix:\n");
		while (scanf("%d%c%d%c", &zeiB, &komma, &spB, &term) != 4 || term != '\n' || komma != ',') {
			while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden

			printf("Bitte nur im Format 2,2 oder 4,3 usw eingeben: ");
		}

		if (spA != zeiB) {
			printf("Spaltenanzahl Matrix A muss gleich der Zeilenanzahl von Matrix B sein!\n");
		}
		else {
			ok = 1;
		}
	}

	float *matA = (float *)malloc(zeiA * spA * sizeof(float));
	float *matB = (float *)malloc(zeiB * spB * sizeof(float));

	printf("\nWerte der 1. Matrix: \n");
	fuelleMatrix(zeiA, spA, (float *)matA);

	printf("\nWerte der 2. Matrix: \n");
	fuelleMatrix(zeiB, spB, (float *)matB);

	printf("1. Matrix \n");
	gebeMatrixAus(zeiA, spA, (float *)matA);
	printf("2. Matrix \n");
	gebeMatrixAus(zeiB, spB, (float *)matB);

	float *erg = (float *)malloc(zeiA * spB * sizeof(float));
	multipliziereMatrix(zeiA, spA, zeiB, spB, (float *)matA, (float *)matB, (float* )erg);

	printf("\nErgebnis Matrix: \n");
	gebeMatrixAus(zeiA, spB, (float *)erg);

	return 0;
}


void fuelleMatrix(int zeilen, int spalten, float *mat)
{
	int iZeile, iSpalte;
	float zahl;
	
	for (iZeile = 0; iZeile < zeilen; iZeile++) {
		for (iSpalte = 0; iSpalte < spalten; iSpalte++) {
			printf("Element %d,%d: ", iZeile + 1, iSpalte + 1);
			scanf("%f", &zahl);
			//mat[iZeile][iSpalte] = zahl;
			*((mat + iZeile * spalten) + iSpalte) = zahl;
		}
	}
}

void gebeMatrixAus(int zeilen, int spalten, float *mat) 
{
	int iZeile, iSpalte, zahl;

	for (iZeile = 0; iZeile < zeilen; iZeile++) {
		for (iSpalte = 0; iSpalte < spalten; iSpalte++) {
			//printf("%d\t", mat[iZeile][iSpalte]);	
			printf("%.2f\t", *((mat + iZeile * spalten) + iSpalte));
		}
		printf("\n");
	}

}

void multipliziereMatrix(int zeilenA, int spaltenA, int zeilenB, int spaltenB, float *matA, float *matB, float *erg)
{
	int iZeile, iSpalte, k;

	for (iZeile = 0; iZeile < zeilenA; ++iZeile) {
		for (iSpalte = 0; iSpalte < spaltenB; ++iSpalte) {
			*((erg + iZeile * spaltenB) + iSpalte) = 0;
		}
	}

	for (iZeile = 0; iZeile < zeilenA; ++iZeile) {
		for (iSpalte = 0; iSpalte < spaltenB; ++iSpalte) {
			for (k = 0; k < spaltenA; ++k) {
				*((erg + iZeile * spaltenB) + iSpalte) += (*((matA + iZeile * spaltenA) + k)) * (*((matB + k * spaltenB) + iSpalte));
			}
		}
	}
}
