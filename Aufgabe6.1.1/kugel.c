/**********************************************************************\
* Kurzbeschreibung: Uebung: 6.1.1; Punkte: 3
*
* Datum:       Autor:                Grund der Aenderung:
* 24.3.2018    Joel Schlotthauer     Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
/*--- #defines -------------------------------------------------------*/
#define PI 3.1415926f
#define VIERPI 12.5663704f

int main(void)
{
	float radius, umfang, volumen, oberflaeche;

	printf("Radius der Kugel: ");
	scanf("%f", &radius);

	printf("Umfang=%f\n\nVolumen=%f\nOberflaeche=%f\n", 2*radius*PI, (4.0/3.0)*(radius*radius*radius)*PI, VIERPI*radius*radius);

	return 0;
}
