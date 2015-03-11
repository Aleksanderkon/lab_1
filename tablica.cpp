#include "tablica.h"

void tablica::MierzenieCzasu(int *Tab, int RozTab){
	
	
	for (int i = 0; i < RozTab; i++){
		Tab[i] *= 2;
	}
	
}
void tablica::GeneratorLiczb(int *Tab, int RozTab)
{	
	srand(time(0));
	for (int i = 0; i < RozTab; i++)
	{
		Tab[i] = rand() % 10000;

	}
}
