#include <stdio.h>
#include <time.h>


void berechneZeit(char operand, struct tm *ptr, struct tm *ptr1) {
	switch (operand) {
	case '+': 
		ptr->tm_hour += ptr1->tm_hour;
		ptr->tm_min += ptr1->tm_min;
		ptr->tm_sec += ptr1->tm_sec;
		break;
	case '-':
		ptr->tm_hour -= ptr1->tm_hour;
		ptr->tm_min -= ptr1->tm_min;
		ptr->tm_sec -= ptr1->tm_sec;
		break;
	}
}

int main()
{
	
	
	int hh, mm, ss, hh1, mm1, ss1, ret, ret1;
	char zeit[9], zeit1[9], buffer[80], buffer1[80], operand;
	struct tm when = { 0 }, when1 = { 0 };


	printf("Bitte 1. Uhrzeit eingeben (hh:mm:ss): ");
	scanf("%s", &zeit);
	sscanf_s(zeit, "%d:%d:%d", &hh, &mm, &ss);

	printf("Bitte 2. Uhrzeit eingeben (hh:mm:ss): ");
	scanf("%s", &zeit1);
	sscanf_s(zeit1, "%d:%d:%d", &hh1, &mm1, &ss1);

	while ((getchar()) != '\n'); // leere Input Buffer, um Endlosschleife zu vermeiden

	printf("Bitte eine Operation eingeben (+/-): ");
	scanf("%c", &operand);

	when.tm_year = 1900;
	when.tm_mon = 7;
	when.tm_mday = 4;
	when.tm_hour = hh;
	when.tm_min = mm;
	when.tm_sec = ss;

	when1.tm_year = 1800;
	when1.tm_mon = 1;
	when1.tm_mday = 1;
	when1.tm_hour = hh1;
	when1.tm_min = mm1;
	when1.tm_sec = ss1;

	berechneZeit(operand, &when, &when1);
	
	//mktime(&when);
	//mktime(&when1);
	//printf("%s", asctime(&when));
	strftime(buffer, sizeof(buffer), "%H:%M:%S", &when);
	printf(buffer);
	printf("\n");


	return 0;
}
