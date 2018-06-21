#include <stdio.h>

void bubbleSort(int inArray[], int n);

int main()
{
	int array[100], n, z;

	printf("Wie viele Zahlen moechtest Du eingeben?\n");
	scanf("%d", &n);

	printf("Bitte %d ganze Zahlen eingeben\n", n);

	for (z = 0; z < n; z++)
		scanf("%d", &array[z]);

	bubbleSort(array, n);

	printf("Vollstaendig sortieres Array:\n");

	for (z = 0; z < n; z++)
		printf("%d\n", array[z]);

	return 0;
}


void bubbleSort(int inArray[], int n)
{
	int c, h, d, swap;

	for (c = 0; c < n - 1; c++)
	{
		for (d = 0; d < n - c - 1; d++)
		{
			if (inArray[d] > inArray[d + 1])
			{
				swap = inArray[d];
				inArray[d] = inArray[d + 1];
				inArray[d + 1] = swap;
			}
		}
		printf("%d. Durchlauf - Aktueller Stand: \n", c + 1);
		for (h = 0; h < n; h++) {
			printf("Zahl%d: %d\n", h + 1, inArray[h]);
		}
	}
}
