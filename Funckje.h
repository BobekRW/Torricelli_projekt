#pragma once
#include <cmath>

int wspolrzednaX(double dane,int skladowa)
{
	return static_cast<int>(14+32*skladowa); 
}

int wspolrzednaYv(double h,double g, int skladowa)
{
	return static_cast<int>(378 - sqrt(2 * g *(h - ((h / 10) * skladowa))));
}

int wspolrzednaYz(double hb, int skladowa)
{
	return static_cast<int>(378 - 2*sqrt(hb/10*skladowa*(hb-hb/10*skladowa)));
}

double vl(double Hb, int skladnia, double g)
{
	return sqrt(2 * g*(Hb - (Hb / 8*skladnia)));
}

double zl(double Hb, int skladnia)
{
	return 2 * sqrt(((Hb / 8)*skladnia)*(Hb - ((Hb / 8)*skladnia)));
}