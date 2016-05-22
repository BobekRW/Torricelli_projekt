#pragma once
#include <cmath>

int wspolrzednaX(double dane,int skladowa)
{
	return static_cast<int>(18 + ((dane / 8)*skladowa));
}

int wspolrzednaY(double dane, int skladowa)
{
	return static_cast<int>(380 - ((dane / 8)*skladowa));
}