#include "Critter.h"
#include <iostream>

using namespace std;

int main()
{
	system("Color 7D");
	// Asignar valors aleatoris del 1 al 10
	int hungerRand, boredRand;
	srand(time(NULL));
	hungerRand = 1 + rand() % (8 - 1);
	boredRand = 1 + rand() % (8 - 1);
	Critter crit1(hungerRand, boredRand);

	// Saludar al jugador i asignar nom mascota
	cout << "Benvingut al joc mascota\n";
	cout << "Posa nom a la teva mascota: ";
	crit1.getName();

	// Comença bucle
	bool gameOn = true;
	while (gameOn == true) 
	{
		// MENU
		cout << "\n\n**MENU MASCOTA**\n";
		cout << "Quina accio vols que la teva mascota realitzi: \n";
		cout << "1. Notificar el seu estat de salut.\n";
		cout << "2. Jugar.\n";
		cout << "3. Menjar.\n";
		cout << "4. Cambiar nom mascota.\n";
		cout << "5. SORTIR.\n\n";

		// ACCIONS MENU
		int opcio;
		cin >> opcio;
		cout << "\n";

		switch (opcio)
		{
			case 1:
				crit1.Greet();
				break;
				
			case 2:
				crit1.Bored();
				break;

			case 3:
				crit1.Hunger();
				break;

			case 4:
				cout << "Cambiar el nom a: ";
				crit1.getName();
				break;

			case 5:
				gameOn = false;
				break;

			default:
				cout << "Opcio invalida\n";
				break;
		}
	}
	return 0;
}