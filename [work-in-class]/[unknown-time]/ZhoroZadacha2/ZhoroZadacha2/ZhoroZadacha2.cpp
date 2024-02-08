#include<stdio.h>

void main()
{
	float boq, naj, raz, chas, mon;
		printf("\n Boq= ");
		scanf("%f", &boq);
		printf("\n Najlon= ");
		scanf("%f", &naj);
		printf("\n Rzdelitel= ");
		scanf("%f", &raz);
		printf("\n Chasove= ");
		scanf("%f", &chas);
		
		boq = boq * 14.5;
		boq = boq * 1.1;
		mon = boq;
			naj = naj * 1.50;
			mon = mon + naj + 0.4;
				raz = raz * 5;
				mon = mon + raz;
					chas = chas * 0.3 * mon;
					mon = mon + chas;
		printf("\n The ammount is %f", mon);
}