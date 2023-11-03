/*
 * main.c
 *
 *  Created on: Nov 3, 2023
 *      Author: Dario
 */

#include <stdio.h>

int main(void)
{
	char wybor;
	float a,b,h,r;
	float area;

	printf("Obliczanie pola powierzchni dla roznych figur geometrycznych.\n");
	printf("Wybierz dostepna opcje:\n");
	printf("t -> trojkat\n");
	printf("z -> trapez\n");
	printf("k -> kolo\n");
	printf("s -> kwadrat\n");
	printf("r -> prostokat\n");
	printf("Twoj wybor: ");
	scanf("%c",&wybor);

	switch(wybor){

	case 't':
		printf("\nObliczanie pola trojkata Pole = (h*b)/2\n");
		printf("");
		printf("");
		printf("");
		printf("");
		printf("Podaj dlugosc podstawy:");
		scanf("%f",&b);
		printf("\nPodaj wysokosc: ");
		scanf("%f",&h);
		area=(b*h)/2;
		if (area>= 0)
			printf("\nPole trojkata wynosi: %0.2f",area);
		else
			area=-1;
		break;

	case 'z':
		printf("\nObliczanie pola trapezu Pole = ((a+b)/2)*h\n");
		printf("Podaj dlugosc 1 podstawy:");
		scanf("%f",&a);
		printf("Podaj dlugosc 2 podstawy:");
		scanf("%f",&b);
		printf("\nPodaj wysokosc: ");
		scanf("%f",&h);
		area=((a+b)/2)*h;
		if (area>= 0)
			printf("\nPole trapezu wynosi: %0.2f",area);
		else
			area=-1;
		break;

	case 'k':
		printf("\nObliczanie pola kola Pole = pi*r*r\n");
		printf("Podaj promien:");
		scanf("%f",&r);
		area=3.14*r*r;
		if (area>= 0)
			printf("\nPole kola wynosi: %0.2f",area);
		else
			area=-1;
		break;

	case 's':
		printf("\nObliczanie pola kwadratu Pole = a*a\n");
		printf("Podaj dlugosc boku:");
		scanf("%f",&a);
		area=a*a;
		if (area>= 0)
			printf("\nPole kwadratu wynosi: %0.2f",area);
		else
			area=-1;
		break;

	case 'r':
		printf("\nObliczanie pola prostokata Pole = a*b\n");
		printf("Podaj dlugosc 1 boku:");
		scanf("%f",&a);
		printf("Podaj dlugosc 2 boku:");
		scanf("%f",&b);
		area=a*b;
		if (area>= 0)
			printf("\nPole prostokata wynosi: %0.2f",area);
		else
			area=-1;
		break;

	default:
		printf("Podaj poprawna komende");

	}
if (area < 0)
	printf("Podane wartosci musza byc wieksze od 0\n");
getchar();
getchar();
}
