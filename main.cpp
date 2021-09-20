#include <iostream>
#include <ctime>
using namespace std;

int tab[10][10];

void mapa()
{
	
	for(int i= 0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			tab[i][j] = 0;

		}

	}	
}

void losuj()
{
	int posx, posy;
	for(int i = 0; i < 4; i++)
	{
		posx = rand() % 10;
		posy = rand() % 10;
		tab[posx][posy] = 2;
	}
}

void wyswietl()
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
}

int main() 
{		
	srand(time(NULL));
	mapa();
	losuj();
	wyswietl();
}



