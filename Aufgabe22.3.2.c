#include <stdio.h>

int main()
{
	int array[100], n, c, d, swap, h;

	printf("Wie viele Zahlen moechtest Du eingeben?\n");
	scanf("%d", &n);

	printf("Bitte %d ganze Zahlen eingeben\n", n);

	for (c = 0; c < n; c++)
		scanf("%d", &array[c]);

	for (c = 0; c < n - 1; c++)
	{
		for (d = 0; d < n - c - 1; d++)
		{
			if (array[d] > array[d + 1]) 
			{
				swap = array[d];
				array[d] = array[d + 1];
				array[d + 1] = swap;
			}
		}
		printf("%d. Durchlauf - Aktueller Stand: \n", c + 1);
		for (h = 0; h < n; h++) {
			printf("Zahl%d: %d\n", h + 1, array[h]);
		}
	}

	printf("Lister:\n");

	for (c = 0; c < n; c++)
		printf("%d\n", array[c]);

	return 0;
}
